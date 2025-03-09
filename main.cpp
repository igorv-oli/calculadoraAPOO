#include <iostream>

#include "ENUM_digit.h"
#include "keyboardDigit.h"
#include "ENUM_operation.h"
#include "keyboardOperation.h"
#include "keyboardCalculator.h"
#include "display.h"
#include "receiver.h"
#include "cpu.h"

int main() {
    Display *display = new Display();
    Receiver *receiver = new Receiver(display);
    Cpu *cpu = new Cpu();

    Digit n1 = Nine;
    Digit n2 = Three;

    Operation op = Multiplication;

    float result = cpu->operations(n1, n2, op);

    receiver->receiverDigit(n1);
    receiver->receiverOperation(op);
    receiver->receiverDigit(n2);
    receiver->receiverOperation(Equal);
    display->show(result);

    return 0;

}