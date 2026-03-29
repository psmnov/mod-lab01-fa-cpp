// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    const char* myStr = "This 1s the3 senten$e With all caseS";
    std::cout << myStr << "\n";
    std::cout << "это 1я функция: " << faStr1(myStr) << "\n";
    std::cout << "это 2я функция: " << faStr2(myStr) << "\n";
    std::cout << "это 3я функция: " << faStr3(myStr) << "\n";
    return 0;
}
