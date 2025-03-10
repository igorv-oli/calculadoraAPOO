#include "calculator.h"

Calculator::~Calculator() {};

void Calculator::showDisplay_Numbers(Digit number) {
    if(verificationHaveNumbers == 0) {
        verificationHaveNumbers++;
        numbers[0] = number;
        this->receiverDigit(number);
    } else if (verificationHaveNumbers == 1) {
        verificationHaveNumbers++;
        numbers[1] = number;
        this->receiverDigit(number);
    }
}

void Calculator::showDisplay_Operations(Operation op) {
    this->receiverOperation(op);
    operations[verificationHaveOperation] = op;
    verificationHaveOperation++;
    if(op == Equal && verificationHaveNumbers == 2) {
        verificationHaveOperation = 0;
        calculate(operations[verificationHaveOperation]);
    }
}

void Calculator::calculate(Operation op) {
    if((verificationHaveOperation == 0) && (verificationHaveNumbers == 2)){
         result = this->cpu->operations(numbers[0], numbers[1], op);
         this->display->show(result);
         verificationCalc = 1;
    }
};

void Calculator::showResult() {

};

void Calculator::clean() {

};