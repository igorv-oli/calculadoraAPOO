#include "cpu.h"

Cpu::Cpu() {};

Cpu::~Cpu() {};

float Cpu::plus(float n1, float n2) {
    return (n1 + n2);
};

float Cpu::less(float n1, float n2) {
    return (n1 - n2);
};

float Cpu::multiplication(float n1, float n2) {
    return (n1 * n2);
};

float Cpu::division(float n1, float n2) {
    return (n1 / n2);
};

float Cpu::operations(float n1, float n2, char op) {
    switch (op) {
        case Plus: return this->plus(n1, n2);  
        case Less: return this->less(n1, n2);  
        case Multiplication: return this->multiplication(n1, n2);  
        case Division: return this->division(n1, n2);
    }
};