#include <iostream>

#include "ENUM_digit.h"
#include "keyboardDigit.h"
#include "ENUM_operation.h"
#include "keyboardOperation.h"
#include "keyboardCalculator.h"
#include "display.h"

int main() {
    Display *display = new Display();

    display->addDigit(Four);
    display->addOperation(Less);

    return 0;

}