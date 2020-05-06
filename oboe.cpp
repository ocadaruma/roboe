#include "oboe.h"

constexpr OboeKeys operator|(const OboeKey &left, const OboeKey &right) {
    return OboeKeys(static_cast<unsigned long>(left)) | right;
}

constexpr unsigned long B_FLAT_3_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_B_FLAT |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_C
).bitFlags();

constexpr unsigned long B_FLAT_3_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_B_FLAT |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_C
).bitFlags();

constexpr unsigned long B_3_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_B |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_C
).bitFlags();

constexpr unsigned long B_3_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_B |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_C
).bitFlags();

constexpr unsigned long C_4_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_C
).bitFlags();

constexpr unsigned long C_4_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_C
).bitFlags();

constexpr unsigned long C_SHARP_4_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_C_SHARP
).bitFlags();

constexpr unsigned long C_SHARP_4_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_C_SHARP
).bitFlags();

constexpr unsigned long C_SHARP_4_TRILL_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_E_FLAT |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_C_SHARP
).bitFlags();

constexpr unsigned long C_SHARP_4_TRILL_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_E_FLAT |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_C_SHARP
).bitFlags();

constexpr unsigned long D_4_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long D_4_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long E_FLAT_4_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_E_FLAT
).bitFlags();

constexpr unsigned long E_FLAT_4_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_E_FLAT
).bitFlags();

constexpr unsigned long E_FLAT_4_1 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_E_FLAT |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long E_FLAT_4_1_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_E_FLAT |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long E_4_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE
).bitFlags();

constexpr unsigned long E_4_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE
).bitFlags();

constexpr unsigned long F_4_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING_F
).bitFlags();

constexpr unsigned long F_4_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING_F
).bitFlags();

constexpr unsigned long F_4_1 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_F |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE
).bitFlags();

constexpr unsigned long F_4_1_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_F |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE
).bitFlags();

constexpr unsigned long F_4_2 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long F_4_2_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long F_SHARP_4_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long F_SHARP_4_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long F_SHARP_4_TRILL_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long F_SHARP_4_TRILL_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long G_4_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING
).bitFlags();

constexpr unsigned long G_4_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING
).bitFlags();

constexpr unsigned long G_4_TRILL_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING_F
).bitFlags();

constexpr unsigned long G_4_TRILL_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING_F
).bitFlags();

constexpr unsigned long G_SHARP_4_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_G_SHARP
).bitFlags();

constexpr unsigned long G_SHARP_4_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_G_SHARP
).bitFlags();

constexpr unsigned long G_SHARP_4_1 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER_G_SHARP
).bitFlags();

constexpr unsigned long G_SHARP_4_1_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER_G_SHARP
).bitFlags();

constexpr unsigned long A_4_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE
).bitFlags();

constexpr unsigned long A_4_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE
).bitFlags();

constexpr unsigned long B_FLAT_4_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_FLAT_4_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_FLAT_4_TRILL_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_G_SHARP
).bitFlags();

constexpr unsigned long B_FLAT_4_TRILL_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_G_SHARP
).bitFlags();

constexpr unsigned long B_FLAT_4_TRILL_1 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_FLAT_4_TRILL_1_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_4_0 = static_cast<unsigned long>(
        OboeKey::LEFT_POINTER
);

constexpr unsigned long B_4_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF
).bitFlags();

constexpr unsigned long B_4_TRILL_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_4_TRILL_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long C_5_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long C_5_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long C_SHARP_5_0 = (
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_C_SHARP
).bitFlags();

constexpr unsigned long C_SHARP_5_TRILL_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_RING_TR_2
).bitFlags();

constexpr unsigned long C_SHARP_5_TRILL_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_RING_TR_2
).bitFlags();

constexpr unsigned long C_SHARP_5_TRILL_1 = static_cast<unsigned long>(
        OboeKey::RIGHT_POINTER
);

constexpr unsigned long C_SHARP_5_TRILL_2 = (
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_E_FLAT |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_C_SHARP
).bitFlags();

constexpr unsigned long D_5_0 = (
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long D_5_TRILL_0 = (
        OboeKey::LEFT_POINTER |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE_TR_3
).bitFlags();

constexpr unsigned long D_5_TRILL_0_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE_TR_3
).bitFlags();

constexpr unsigned long D_5_TRILL_1 = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE_TR_1 |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long D_5_TRILL_1_HO = (
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE_TR_1 |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long E_FLAT_5_0 = (
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_E_FLAT
).bitFlags();

constexpr unsigned long E_FLAT_5_1 = (
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_E_FLAT |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long E_5_0 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE
).bitFlags();

constexpr unsigned long E_5_0_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE
).bitFlags();

constexpr unsigned long F_5_0 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING_F
).bitFlags();

constexpr unsigned long F_5_0_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING_F
).bitFlags();

constexpr unsigned long F_5_1 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_F |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE
).bitFlags();

constexpr unsigned long F_5_1_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_F |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_MIDDLE
).bitFlags();

constexpr unsigned long F_5_2 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long F_5_2_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long F_SHARP_5_0 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long F_SHARP_5_0_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long F_SHARP_5_TRILL_0 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long F_SHARP_5_TRILL_0_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long G_5_0 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING
).bitFlags();

constexpr unsigned long G_5_0_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING
).bitFlags();

constexpr unsigned long G_5_TRILL_0 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING_F
).bitFlags();

constexpr unsigned long G_5_TRILL_0_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING_F
).bitFlags();

constexpr unsigned long G_SHARP_5_0 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_G_SHARP
).bitFlags();

constexpr unsigned long G_SHARP_5_0_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_G_SHARP
).bitFlags();

constexpr unsigned long G_SHARP_5_1 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER_G_SHARP
).bitFlags();

constexpr unsigned long G_SHARP_5_1_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER_G_SHARP
).bitFlags();

constexpr unsigned long A_5_0 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE
).bitFlags();

constexpr unsigned long A_5_0_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE
).bitFlags();

constexpr unsigned long A_5_1 = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE
).bitFlags();

constexpr unsigned long A_5_1_HO = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE
).bitFlags();

constexpr unsigned long B_FLAT_5_0 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_FLAT_5_0_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_FLAT_5_1 = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_FLAT_5_1_HO = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_FLAT_5_TRILL_0 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_G_SHARP
).bitFlags();

constexpr unsigned long B_FLAT_5_TRILL_0_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_G_SHARP
).bitFlags();

constexpr unsigned long B_FLAT_5_TRILL_1 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_FLAT_5_TRILL_1_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_FLAT_5_TRILL_2 = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_FLAT_5_TRILL_2_HO = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_5_0 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER
).bitFlags();

constexpr unsigned long B_5_0_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF
).bitFlags();

constexpr unsigned long B_5_1 = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER
).bitFlags();

constexpr unsigned long B_5_1_HO = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF
).bitFlags();

constexpr unsigned long B_5_TRILL_0 = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_5_TRILL_0_HO = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_5_TRILL_1 = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long B_5_TRILL_1_HO = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long C_6_0 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long C_6_0_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long C_6_1 = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long C_6_1_HO = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long C_SHARP_6_0 = (
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_LITTLE_C
).bitFlags();

constexpr unsigned long C_SHARP_6_TRILL_0 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_RING_TR_2
).bitFlags();

constexpr unsigned long C_SHARP_6_TRILL_0_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_RING_TR_2
).bitFlags();

constexpr unsigned long C_SHARP_6_TRILL_1 = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_RING_TR_2
).bitFlags();

constexpr unsigned long C_SHARP_6_TRILL_1_HO = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_RING_TR_2
).bitFlags();

constexpr unsigned long C_SHARP_6_TRILL_2 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long C_SHARP_6_TRILL_3 = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long D_6_0 = (
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_LITTLE_C
).bitFlags();

constexpr unsigned long D_6_1 = (
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_C
).bitFlags();

constexpr unsigned long D_6_TRILL_0 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE_TR_1 |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long D_6_TRILL_0_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE_TR_1 |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long D_6_TRILL_1 = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE_TR_1 |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long D_6_TRILL_1_HO = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE_TR_1 |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long D_6_TRILL_2 = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_MIDDLE_TR_3
).bitFlags();

constexpr unsigned long D_6_TRILL_2_HO = (
        OboeKey::LEFT_THUMB_81 |
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_MIDDLE_TR_3
).bitFlags();

constexpr unsigned long D_6_TRILL_3 = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_MIDDLE_TR_3
).bitFlags();

constexpr unsigned long D_6_TRILL_3_HO = (
        OboeKey::LEFT_POINTER_82 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_MIDDLE_TR_3
).bitFlags();

constexpr unsigned long E_FLAT_6_0 = (
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_B |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long E_FLAT_6_1 = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long E_6_0 = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_E_FLAT
).bitFlags();

constexpr unsigned long E_6_1 = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER_G_SHARP |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_E_FLAT
).bitFlags();

constexpr unsigned long E_6_2 = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_RING |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::LEFT_LITTLE_E_FLAT |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long F_6_0 = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_E_FLAT
).bitFlags();

constexpr unsigned long F_6_1 = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::RIGHT_POINTER_G_SHARP |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_E_FLAT
).bitFlags();

constexpr unsigned long F_6_2 = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::LEFT_LITTLE_E_FLAT |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long F_SHARP_6_0 = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_MIDDLE |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_LITTLE_C
).bitFlags();

constexpr unsigned long F_SHARP_6_0_HO = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_MIDDLE |
        OboeKey::RIGHT_POINTER |
        OboeKey::RIGHT_LITTLE_C
).bitFlags();

constexpr unsigned long F_SHARP_6_1 = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_E_FLAT
).bitFlags();

constexpr unsigned long F_SHARP_6_1_HO = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING |
        OboeKey::RIGHT_LITTLE_E_FLAT
).bitFlags();

constexpr unsigned long F_SHARP_6_2 = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::LEFT_LITTLE_E_FLAT |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long F_SHARP_6_2_HO = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::LEFT_LITTLE_E_FLAT |
        OboeKey::RIGHT_MIDDLE |
        OboeKey::RIGHT_RING
).bitFlags();

constexpr unsigned long G_6_0 = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long G_6_0_HO = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_RING |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long G_6_1 = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

constexpr unsigned long G_6_1_HO = (
        OboeKey::LEFT_THUMB_83 |
        OboeKey::LEFT_POINTER |
        OboeKey::LEFT_POINTER_HALF |
        OboeKey::LEFT_LITTLE_G_SHARP |
        OboeKey::RIGHT_POINTER
).bitFlags();

Pitch OboeKeys::toPitch() const {
    switch (this->bitFlags()) {
        case B_FLAT_3_0:
        case B_FLAT_3_0_HO:
            return { 3, PitchName::B, Accidental::FLAT };
        case B_3_0:
        case B_3_0_HO:
            return { 3, PitchName::B, Accidental::NATURAL };
        case C_4_0:
        case C_4_0_HO:
            return PITCH_MIDDLE_C;
        case C_SHARP_4_0:
        case C_SHARP_4_0_HO:
        case C_SHARP_4_TRILL_0:
        case C_SHARP_4_TRILL_0_HO:
            return { 4, PitchName::C, Accidental::SHARP };
        case D_4_0:
        case D_4_0_HO:
            return { 4, PitchName::D, Accidental::NATURAL };
        case E_FLAT_4_0:
        case E_FLAT_4_0_HO:
        case E_FLAT_4_1:
        case E_FLAT_4_1_HO:
            return { 4, PitchName::E, Accidental::FLAT };
        case E_4_0:
        case E_4_0_HO:
            return { 4, PitchName::E, Accidental::NATURAL };
        case F_4_0:
        case F_4_0_HO:
        case F_4_1:
        case F_4_1_HO:
        case F_4_2:
        case F_4_2_HO:
            return { 4, PitchName::F, Accidental::NATURAL };
        case F_SHARP_4_0:
        case F_SHARP_4_0_HO:
        case F_SHARP_4_TRILL_0:
        case F_SHARP_4_TRILL_0_HO:
            return { 4, PitchName::F, Accidental::SHARP };
        case G_4_0:
        case G_4_0_HO:
        case G_4_TRILL_0:
        case G_4_TRILL_0_HO:
            return { 4, PitchName::G, Accidental::NATURAL };
        case G_SHARP_4_0:
        case G_SHARP_4_0_HO:
        case G_SHARP_4_1:
        case G_SHARP_4_1_HO:
            return { 4, PitchName::G, Accidental::SHARP };
        case A_4_0:
        case A_4_0_HO:
            return { 4, PitchName::A, Accidental::NATURAL };
        case B_FLAT_4_0:
        case B_FLAT_4_0_HO:
        case B_FLAT_4_TRILL_0:
        case B_FLAT_4_TRILL_0_HO:
        case B_FLAT_4_TRILL_1:
        case B_FLAT_4_TRILL_1_HO:
            return { 4, PitchName::B, Accidental::FLAT };
        case B_4_0:
        case B_4_0_HO:
        case B_4_TRILL_0:
        case B_4_TRILL_0_HO:
            return { 4, PitchName::B, Accidental::NATURAL };
        case C_5_0:
        case C_5_0_HO:
            return { 5, PitchName::C, Accidental::NATURAL };
        case C_SHARP_5_0:
        case C_SHARP_5_TRILL_0:
        case C_SHARP_5_TRILL_0_HO:
        case C_SHARP_5_TRILL_1:
        case C_SHARP_5_TRILL_2:
            return { 5, PitchName::C, Accidental::SHARP };
        case D_5_0:
        case D_5_TRILL_0:
        case D_5_TRILL_0_HO:
        case D_5_TRILL_1:
        case D_5_TRILL_1_HO:
            return { 5, PitchName::D, Accidental::NATURAL };
        case E_FLAT_5_0:
        case E_FLAT_5_1:
            return { 5, PitchName::E, Accidental::FLAT };
        case E_5_0:
        case E_5_0_HO:
            return { 5, PitchName::E, Accidental::NATURAL };
        case F_5_0:
        case F_5_0_HO:
        case F_5_1:
        case F_5_1_HO:
        case F_5_2:
        case F_5_2_HO:
            return { 5, PitchName::F, Accidental::NATURAL };
        case F_SHARP_5_0:
        case F_SHARP_5_0_HO:
        case F_SHARP_5_TRILL_0:
        case F_SHARP_5_TRILL_0_HO:
            return { 5, PitchName::F, Accidental::SHARP };
        case G_5_0:
        case G_5_0_HO:
        case G_5_TRILL_0:
        case G_5_TRILL_0_HO:
            return { 5, PitchName::G, Accidental::NATURAL };
        case G_SHARP_5_0:
        case G_SHARP_5_0_HO:
        case G_SHARP_5_1:
        case G_SHARP_5_1_HO:
            return { 5, PitchName::G, Accidental::SHARP };
        case A_5_0:
        case A_5_0_HO:
        case A_5_1:
        case A_5_1_HO:
            return { 5, PitchName::A, Accidental::NATURAL };
        case B_FLAT_5_0:
        case B_FLAT_5_0_HO:
        case B_FLAT_5_1:
        case B_FLAT_5_1_HO:
        case B_FLAT_5_TRILL_0:
        case B_FLAT_5_TRILL_0_HO:
        case B_FLAT_5_TRILL_1:
        case B_FLAT_5_TRILL_1_HO:
        case B_FLAT_5_TRILL_2:
        case B_FLAT_5_TRILL_2_HO:
            return { 5, PitchName::B, Accidental::FLAT };
        case B_5_0:
        case B_5_0_HO:
        case B_5_1:
        case B_5_1_HO:
        case B_5_TRILL_0:
        case B_5_TRILL_0_HO:
        case B_5_TRILL_1:
        case B_5_TRILL_1_HO:
            return { 5, PitchName::B, Accidental::NATURAL };
        case C_6_0:
        case C_6_0_HO:
        case C_6_1:
        case C_6_1_HO:
            return { 6, PitchName::C, Accidental::NATURAL };
        case C_SHARP_6_0:
        case C_SHARP_6_TRILL_0:
        case C_SHARP_6_TRILL_0_HO:
        case C_SHARP_6_TRILL_1:
        case C_SHARP_6_TRILL_1_HO:
        case C_SHARP_6_TRILL_2:
        case C_SHARP_6_TRILL_3:
            return { 6, PitchName::C, Accidental::SHARP };
        case D_6_0:
        case D_6_1:
        case D_6_TRILL_0:
        case D_6_TRILL_0_HO:
        case D_6_TRILL_1:
        case D_6_TRILL_1_HO:
        case D_6_TRILL_2:
        case D_6_TRILL_2_HO:
        case D_6_TRILL_3:
        case D_6_TRILL_3_HO:
            return { 6, PitchName::D, Accidental::NATURAL };
        case E_FLAT_6_0:
        case E_FLAT_6_1:
            return { 6, PitchName::E, Accidental::FLAT };
        case E_6_0:
        case E_6_1:
        case E_6_2:
            return { 6, PitchName::E, Accidental::NATURAL };
        case F_6_0:
        case F_6_1:
        case F_6_2:
            return { 6, PitchName::F, Accidental::NATURAL };
        case F_SHARP_6_0:
        case F_SHARP_6_0_HO:
        case F_SHARP_6_1:
        case F_SHARP_6_1_HO:
        case F_SHARP_6_2:
        case F_SHARP_6_2_HO:
            return { 6, PitchName::F, Accidental::SHARP };
        case G_6_0:
        case G_6_0_HO:
        case G_6_1:
        case G_6_1_HO:
            return { 6, PitchName::G, Accidental::NATURAL };
        default:
            return PITCH_UNDEFINED;
    }
}
