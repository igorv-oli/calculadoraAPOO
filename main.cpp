#include <iostream>

#include "ENUM_digit.h"
#include "keyboardDigit.h"
#include "ENUM_operation.h"
#include "keyboardOperation.h"
#include "keyboardCalculator.h"
#include "display.h"
#include "receiver.h"

int main() {
    Display *display = new Display();
    Receiver *receiver = new Receiver(display);

    receiver->receiverDigit(Three);
    receiver->receiverOperation(Multiplication);

    return 0;

}