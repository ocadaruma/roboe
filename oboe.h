#ifndef ROBOE_OBOE_H
#define ROBOE_OBOE_H

#include "musical.h"

/**
 * Based on Marigaux Lemaire
 */
enum class OboeKey: unsigned long {
    UNKNOWN               = 0UL,
    RIGHT_LITTLE_E_FLAT   = 1UL,
    RIGHT_LITTLE_C_SHARP  = 1UL << 1,
    RIGHT_LITTLE_C        = 1UL << 2,
    RIGHT_RING            = 1UL << 3,
    RIGHT_RING_F          = 1UL << 4,
    RIGHT_MIDDLE          = 1UL << 5,
    RIGHT_MIDDLE_TR_3     = 1UL << 6,
    RIGHT_POINTER         = 1UL << 7,
    RIGHT_POINTER_G_SHARP = 1UL << 8,

    LEFT_LITTLE_F         = 1UL << 9,
    LEFT_LITTLE_B_FLAT    = 1UL << 10,
    LEFT_LITTLE_B         = 1UL << 11,
    LEFT_LITTLE_E_FLAT    = 1UL << 12,
    LEFT_LITTLE_G_SHARP   = 1UL << 13,
    LEFT_RING             = 1UL << 14,
    LEFT_RING_TR_2        = 1UL << 15,
    LEFT_MIDDLE           = 1UL << 16,
    LEFT_MIDDLE_TR_1      = 1UL << 17,
    LEFT_POINTER          = 1UL << 18,
    LEFT_POINTER_HALF     = 1UL << 19,
    LEFT_POINTER_82       = 1UL << 20,
    LEFT_THUMB_81         = 1UL << 21,
    LEFT_THUMB_83         = 1UL << 22,
};

/**
 * Represents oboe key combination
 */
class OboeKeys {
public:
    explicit constexpr OboeKeys(unsigned long bitFlags):
            _bitFlags(bitFlags) {
    }

    constexpr OboeKeys(): _bitFlags(0UL) {
    }

    Pitch toPitch() const;

    OboeKeys operator|(const OboeKey &key) const {
        return OboeKeys(this->_bitFlags | static_cast<unsigned long>(key));
    }

    OboeKeys operator-(const OboeKey &key) const {
        return OboeKeys(this->_bitFlags & ~(static_cast<unsigned long>(key)));
    }

    bool operator==(const OboeKeys &other) const {
        return this->_bitFlags == other._bitFlags;
    }

    bool operator==(const OboeKey &key) const {
        return this->_bitFlags == static_cast<unsigned long>(key);
    }

private:
    unsigned long _bitFlags;
};

OboeKeys operator|(const OboeKey&, const OboeKey&);

#endif //ROBOE_OBOE_H
