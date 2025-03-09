#include "ENUM_operation.h"
#include "keyboardOperation.h"

KeyboardOperation::KeyboardOperation() {};

KeyboardOperation::~KeyboardOperation() {};

Operation KeyboardOperation::pressPlus() {
    return Plus;
};

Operation KeyboardOperation::pressLess() {
    return Less;
};

Operation KeyboardOperation::pressMultiplication() {
    return Multiplication;
};

Operation KeyboardOperation::pressDivision() {
    return Division;
};

Operation KeyboardOperation::pressEqual() {
    return Equal;
};

Operation KeyboardOperation::pressBtn() {
    return Btn;
};