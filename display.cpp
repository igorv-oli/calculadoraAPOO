#include <iostream>

#include "display.h"

Display::Display() {};

Display::~Display() {};

void Display::addDigit(Digit digit) {
    switch (digit) {
        case Zero: std::cout << "0"; break;
        case One: std::cout << "1"; break;
        case Two: std::cout << "2"; break;
        case Three: std::cout << "3"; break;
        case Four: std::cout << "4"; break;
        case Five: std::cout << "5"; break;
        case Six: std::cout << "6"; break;
        case Seven: std::cout << "7"; break;
        case Eight: std::cout << "8"; break;
        case Nine: std::cout << "9"; break;
        default: break;
    }
};

void Display::addOperation(Operation operation) {
    switch (operation) {
        case Plus: std::cout << "+"; break; 
        case Less: std::cout << "-"; break; 
        case Multiplication: std::cout << "*"; break; 
        case Division: std::cout << "/"; break; 
        case Equal: std::cout << "="; break; 
        case Btn: std::cout << "."; break; 
        default: break;
    }
};

void Display::show(float result) {
    std::cout << result << "\n";
}