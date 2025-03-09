#include <iostream>

#include "ENUM_digit.h"
#include "keyboardDigit.h"
#include "ENUM_operation.h"
#include "keyboardOperation.h"

int main() {
    KeyboardDigit *kd = new KeyboardDigit();
    KeyboardOperation *ko = new KeyboardOperation();

    Digit d = kd->pressEight();
    char o = ko->pressEqual();

    std::cout << d << "\n";
    std::cout << o << "\n";

    return 0;

}