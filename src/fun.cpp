// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
    int count = 0;
    bool inWord = false;
    bool anyNumInWord = false;
    while(*str) {
        if (str!=' ') {
            inWord = true;
            if (*str >= '0' && *str <= '9') {
                anyNumInWord = true;
            }
        }
        else {
            if (inWord && !anyNumInWord) {
                count++;
            }
            inWord = false;
            anyNumInWord = false;
        }
        str++;
    }
}

unsigned int faStr2(const char *str) {
    return 0;
}

unsigned int faStr3(const char *str) {
    return 0;
}
