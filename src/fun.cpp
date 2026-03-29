// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
    int count = 0;
    bool inWord = false;
    bool anyNumInWord = false;
    while (*str) {
        if (*str != ' ') {
            inWord = true;
            if (*str >= '0' && *str <= '9') {
                anyNumInWord = true;
            }
        } else {
            if (inWord && !anyNumInWord) {
                count++;
            }
            inWord = false;
            anyNumInWord = false;
        }
        str++;
    }
    return count;
}

unsigned int faStr2(const char *str) {
    int count = 0;
    bool inWord = false;
    bool anyIncorrectPatterns = false;
    int numOfSymbol = 0;
    while (*str) {
        if (*str != ' ') {
            inWord = true;
            numOfSymbol++;
            if ((numOfSymbol == 1 && (*str < 'A' || *str > 'Z'))
                || (numOfSymbol != 1 && (*str < 'a' || *str > 'z'))) {
                anyIncorrectPatterns = true;
            }
        } else {
            if (inWord && !anyIncorrectPatterns) {
                count++;
            }
            inWord = false;
            anyIncorrectPatterns = false;
            numOfSymbol = 0;
        }
        str++;
    }
    return count;
}

unsigned int faStr3(const char *str) {
    return 0;
}
