#ifndef ROBOE_OBOE_H
#define ROBOE_OBOE_H

#include "musical.h"

/**
 * Based on Marigaux Lemaire
 */
typedef long OboeKey;

const OboeKey OBOE_KEY_UNKNOWN      = 0L;
const OboeKey RIGHT_LITTLE_E_FLAT   = 1L;
const OboeKey RIGHT_LITTLE_C_SHARP  = 1L << 1;
const OboeKey RIGHT_LITTLE_C        = 1L << 2;
const OboeKey RIGHT_RING            = 1L << 3;
const OboeKey RIGHT_RING_F          = 1L << 4;
const OboeKey RIGHT_MIDDLE          = 1L << 5;
const OboeKey RIGHT_MIDDLE_TR_3     = 1L << 6;
const OboeKey RIGHT_POINTER         = 1L << 7;
const OboeKey RIGHT_POINTER_G_SHARP = 1L << 8;

const OboeKey LEFT_LITTLE_F        = 1L << 9;
const OboeKey LEFT_LITTLE_B_FLAT   = 1L << 10;
const OboeKey LEFT_LITTLE_B        = 1L << 11;
const OboeKey LEFT_LITTLE_E_FLAT   = 1L << 12;
const OboeKey LEFT_LITTLE_G_SHARP  = 1L << 13;
const OboeKey LEFT_RING            = 1L << 14;
const OboeKey LEFT_RING_TR_2       = 1L << 15;
const OboeKey LEFT_MIDDLE          = 1L << 16;
const OboeKey LEFT_MIDDLE_TR_1     = 1L << 17;
const OboeKey LEFT_POINTER         = 1L << 18;
const OboeKey LEFT_POINTER_HALF    = 1L << 19;
const OboeKey LEFT_POINTER_82      = 1L << 20;
const OboeKey LEFT_THUMB_81        = 1L << 21;
const OboeKey LEFT_THUMB_83        = 1L << 22;

#ifdef __cplusplus
extern "C" {
#endif

Pitch oboeKeyToPitch(OboeKey keys);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //ROBOE_OBOE_H
