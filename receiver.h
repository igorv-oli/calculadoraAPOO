#ifndef RECEIVER
#define RECEIVER

#include "ENUM_digit.h"
#include "ENUM_operation.h"
#include "display.h"

class Receiver {
    Display *display;

    public:
    Receiver(Display *display);
    ~Receiver();
    void receiverDigit(Digit digit);
    void receiverOperation(Operation operation);
};

#endif