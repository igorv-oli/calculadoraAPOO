#ifndef KEYBOARD_DIGIT
#define KEYBOARD_DIGIT

#include "ENUM_digit.h"

class KeyboardDigit {
    public:
    KeyboardDigit();
    ~KeyboardDigit();
    Digit pressZero();
    Digit pressOne();
    Digit pressTwo();
    Digit pressThree();
    Digit pressFour();
    Digit pressFive();
    Digit pressSix();
    Digit pressSeven();
    Digit pressEight();
    Digit pressNine();
};

#endif