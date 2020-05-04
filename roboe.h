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
            _previousBreathIntensity(0),
            _breathIntensity(0),
            _previousPitch(PITCH_UNDEFINED),
            _pitch(PITCH_UNDEFINED) {
    }

    void update(int breathIntensity, OboeKeys keys) {
        Pitch pitch = keys.toPitch();

        this->_breathIntensity = breathIntensity;
        this->_pitch = pitch;

        if (this->_previousBreathIntensity != breathIntensity ||
            !(this->_previousPitch == pitch)) {

            Serial.print("changed. ");
            this->print();
            Serial.println();

            this->_previousPitch = pitch;
            this->_previousBreathIntensity = breathIntensity;
        }
    }

    void print() const {
        Serial.print("Roboe(breath=");
        Serial.print(this->_breathIntensity);
        Serial.print(", prev=");
        this->_previousPitch.print();
        Serial.print(", current=");
        this->_pitch.print();
        Serial.print(")");
    }

private:
    int _previousBreathIntensity;
    int _breathIntensity;
    Pitch _previousPitch;
    Pitch _pitch;
    midi::MidiInterface<midi::SerialMIDI<HardwareSerial>> &_midiInterface;
};

#endif //ROBOE_ROBOE_H
