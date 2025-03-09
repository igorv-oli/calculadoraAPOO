#ifndef KEYBOARD_OPERATION
#define KEYBOARD_OPERATION

#include "ENUM_operation.h"

class KeyboardOperation {
    public:
    KeyboardOperation();
    ~KeyboardOperation();
    Operation pressPlus();
    Operation pressLess();
    Operation pressMultiplication();
    Operation pressDivision();
    Operation pressEqual();
    Operation pressBtn();
};

#endif