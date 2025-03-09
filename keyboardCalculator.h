#ifndef KEYBOARD_CALCULATOR
#define KEYBOARD_CALCULATOR

#include "keyboardDigit.h"
#include "keyboardOperation.h"

class KeyboardCalculator : public KeyboardDigit, public KeyboardOperation {
    public:
    KeyboardCalculator();
    ~KeyboardCalculator();
};

#endif