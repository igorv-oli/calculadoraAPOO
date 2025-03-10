#include <iostream>

#include "ENUM_digit.h"
#include "keyboardDigit.h"
#include "ENUM_operation.h"
#include "keyboardOperation.h"
#include "keyboardCalculator.h"
#include "display.h"
#include "receiver.h"
#include "cpu.h"
#include "calculator.h"

int main() {
    KeyboardCalculator *keyboard = new KeyboardCalculator();
    Display *display = new Display();
    Cpu *cpu = new Cpu();
    Calculator *calculator = new Calculator(display, cpu, keyboard);

    Digit n1 = keyboard->pressEight();
    Digit n2 = keyboard->pressFour();

    Operation op1 = keyboard->pressMultiplication();
    Operation op2 = keyboard->pressEqual();

    calculator->showDisplay_Numbers(n1);
    calculator->showDisplay_Operations(op1);
    calculator->showDisplay_Numbers(n2);
    calculator->showDisplay_Operations(op2);

    return 0;

}