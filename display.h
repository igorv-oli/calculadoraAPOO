#ifndef DISPLAY
#define DISPLAY

#include "ENUM_digit.h"
#include "ENUM_operation.h"

class Display {
    public:
    Display();
    ~Display();
    void addDigit(Digit digit);
    void addOperation(Operation operation);
    void show(float result);
};

#endif