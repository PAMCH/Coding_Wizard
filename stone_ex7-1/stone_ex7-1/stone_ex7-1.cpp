﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


int main()
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d+%d=%d\n", a, b, a + b);
    printf("%d-%d=%d\n", a, b, a - b);
    printf("%d*%d=%d\n", a, b, a * b);
    printf("%d/%d=%d\n", a, b, a / b);
    printf("%d%%%d=%d\n", a, b, a % b);

    return 0;
}