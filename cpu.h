#ifndef CPU
#define CPU

#include "ENUM_digit.h"
#include "ENUM_operation.h"

class Cpu {
    float plus(float n1, float n2);
    float less(float n1, float n2);
    float multiplication(float n1, float n2);
    float division(float n1, float n2);

    public:
    Cpu();
    ~Cpu();
    float operations(float n1, float n2, char op);
};

#endif