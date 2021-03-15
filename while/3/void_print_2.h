#pragma once
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
void print2(int n, int k) {
	double a, eps;
	int i = 0;
	while (i <= (n)) {
		if (i % k == k - 1) {
			i++;
			continue;
		}
		a = pow((-1), i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		cout << a << " ";
		i++;
	}
}