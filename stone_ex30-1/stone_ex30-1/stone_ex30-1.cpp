﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a[11] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int tmp;

	tmp = a[1];
	for (int i = 1; i < 10; i++) {
		a[i] = a[i + 1];
	}
	a[10] = tmp;

	for (int i = 1; i <= 10; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}