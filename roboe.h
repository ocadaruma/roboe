#ifndef ROBOE_ROBOE_H
#define ROBOE_ROBOE_H

#include <Arduino.h>
#include <MIDI.h>
#include "oboe.h"
#include "musical.h"

class Roboe {
public:
    explicit Roboe(midi::MidiInterface<midi::SerialMIDI<HardwareSerial>> &midiInterface) :
            _midiInterface(midiInterface),
            _breathIntensity(0),
            _pitch(PITCH_UNDEFINED) {
    }

    void update(int breathIntensity, OboeKeys keys) {
        Pitch pitch = keys.toPitch();

        State from = state(_breathIntensity, _pitch);
        State to = state(breathIntensity, pitch);

        if (from == BREATH_OFF_PITCH_UNDEF &&
            to == BREATH_ON_PITCH_DEF) {
            changeIntensity(breathIntensity);
            noteOn(pitch);
        } else if (from == BREATH_ON_PITCH_DEF &&
                   to == BREATH_OFF_PITCH_UNDEF) {
            noteOff(_pitch);
            changeIntensity(breathIntensity);
        } else if (from == BREATH_OFF_PITCH_DEF &&
                   to == BREATH_ON_PITCH_DEF) {
            noteOff(_pitch);
            changeIntensity(breathIntensity);
            noteOn(pitch);
        } else if (from == BREATH_ON_PITCH_DEF &&
                   to == BREATH_OFF_PITCH_DEF) {
            noteOff(_pitch);
            changeIntensity(breathIntensity);
        } else if (from == BREATH_ON_PITCH_UNDEF &&
                   to == BREATH_OFF_PITCH_DEF) {
            noteOff(pitch);
            changeIntensity(breathIntensity);
        } else if (from == BREATH_ON_PITCH_UNDEF &&
                   to == BREATH_OFF_PITCH_UNDEF) {
            changeIntensity(breathIntensity);
        } else if (from == BREATH_ON_PITCH_UNDEF &&
                   to == BREATH_ON_PITCH_DEF) {
            changeIntensity(breathIntensity);
            noteOn(pitch);
        } else if (from == BREATH_ON_PITCH_DEF &&
                   to == BREATH_ON_PITCH_UNDEF) {
            noteOff(_pitch);
            changeIntensity(breathIntensity);
        } else if (from == BREATH_ON_PITCH_UNDEF &&
                   to == BREATH_ON_PITCH_UNDEF) {
            changeIntensity(breathIntensity);
        } else if (from == BREATH_ON_PITCH_DEF &&
                   to == BREATH_ON_PITCH_DEF) {
            changeIntensity(breathIntensity);
            if (!(_pitch == pitch)) {
                noteOff(_pitch);
                noteOn(pitch);
            }
        }

        this->_breathIntensity = breathIntensity;
        this->_pitch = pitch;
    }

private:
    int _breathIntensity;
    Pitch _pitch;
    midi::MidiInterface<midi::SerialMIDI<HardwareSerial>> &_midiInterface;

    enum State {
        BREATH_OFF_PITCH_UNDEF,
        BREATH_OFF_PITCH_DEF,
        BREATH_ON_PITCH_UNDEF,
        BREATH_ON_PITCH_DEF,
    };

    static State state(int breathIntensity, Pitch pitch) {
        if (breathIntensity == 0 && !(pitch == PITCH_UNDEFINED)) {
            return BREATH_OFF_PITCH_DEF;
        } else if (breathIntensity > 0 && pitch == PITCH_UNDEFINED) {
            return BREATH_ON_PITCH_UNDEF;
        } else if (breathIntensity > 0 && !(pitch == PITCH_UNDEFINED)) {
            return BREATH_ON_PITCH_DEF;
        } else {
            return BREATH_OFF_PITCH_UNDEF;
        }
    }

    void noteOn(Pitch pitch) {
        _midiInterface.sendNoteOn(pitch.toMidiNoteNumber(), 100, 1);
    }

    void noteOff(Pitch pitch) {
        _midiInterface.sendNoteOff(pitch.toMidiNoteNumber(), 100, 1);
    }

    void changeIntensity(int intensity) {
        if (_breathIntensity != intensity) {
            _midiInterface.sendControlChange(11, intensity, 1);
        }
    }
};

#endif //ROBOE_ROBOE_H
