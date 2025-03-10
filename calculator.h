#ifndef CALCULATOR
#define CALCULATOR

#include "ENUM_operation.h"
#include "receiver.h"
#include "display.h"
#include "cpu.h"
#include "keyboardCalculator.h"

class Calculator : public Receiver {
    Display* display;
    Cpu* cpu;
    KeyboardCalculator* keyboard;
    
    int verificationHaveNumbers = 0;
    int verificationHaveOperation = 0;
    int verificationCalc = 0;

    int numbers[2] = {0, 0};
    Operation operations[2];
    float result;

    public:
    Calculator(Display *display, Cpu *cpu, KeyboardCalculator *keyboard): Receiver(display){
        this->display = display;
        this->cpu = cpu;
        this->keyboard = keyboard;
    };

    ~Calculator();

    void showDisplay_Numbers(Digit number);

    void showDisplay_Operations(Operation op);

    void calculate(Operation op);

    void showResult();

    void clean();
};

#endif