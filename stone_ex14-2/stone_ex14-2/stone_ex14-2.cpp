﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a < 0 || b < 0) {
        printf("One of a or b is negative number");
    }
    else {
        printf("both a and b are zero or more");
    }

    return 0;
}