#include "Key.h"

Key::Key() {
    setValue(0);
}

Key::Key(int v) {
    setValue(v);
}

int Key::getValue() {
    return _value;
}

void Key::setValue(int v) {
    _value = v;
}

bool Key::operator==(Key k) {
    return getValue() == k.getValue();
}
