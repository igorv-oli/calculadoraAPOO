#include "receiver.h"

Receiver::Receiver(Display *display) {
    this->display = display;
};

Receiver::~Receiver() {};

void Receiver::receiverDigit(Digit digit) {
    this->display->addDigit(digit);
};

void Receiver::receiverOperation(Operation operation) {
    this->display->addOperation(operation);
}