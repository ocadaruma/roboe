use crate::oboe::fingering::Key;
use std::collections::HashMap;

pub fn register_key_hook() {
    let mut default_mapping = HashMap::new();

    default_mapping.insert("0", Key::RightLittleEflat);
    default_mapping.insert("p", Key::RightLittleCsharp);
    default_mapping.insert(";", Key::RightLittleC);
    default_mapping.insert("o", Key::RightRing);
    default_mapping.insert("9", Key::RightRingF);
    default_mapping.insert("i", Key::RightMiddle);
    default_mapping.insert("8", Key::RightMiddleTr3);
    default_mapping.insert("u", Key::RightPointer);
    default_mapping.insert("7", Key::RightPointerGsharp);

    default_mapping.insert("1", Key::LeftLittleGsharp);
    default_mapping.insert("q", Key::LeftLittleEflat);
    default_mapping.insert("a", Key::LeftLittleB);
    default_mapping.insert("z", Key::LeftLittleBflat);
    default_mapping.insert("s", Key::LeftLittleF);
    default_mapping.insert("w", Key::LeftRing);
    default_mapping.insert("2", Key::LeftRingTr2);
    default_mapping.insert("e", Key::LeftMiddle);
    default_mapping.insert("3", Key::LeftMiddleTr1);
    default_mapping.insert("r", Key::LeftPointer);
    default_mapping.insert("4", Key::LeftPointerHalf);
    default_mapping.insert("f", Key::LeftPointer82);
    default_mapping.insert("v", Key::LeftThumb81);
    default_mapping.insert("b", Key::LeftThumb83);
}
