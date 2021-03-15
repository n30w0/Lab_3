#pragma once
#include "pch.h"
#include <cmath>
#include <iostream>
#include <cmath>
using namespace std;
void print1(int n, int k) {
	double a, eps;
	int i = 0;
	for (int i = 0; i <= (n-1); ++i) {
		if (i % k == k - 1)
			continue;
		a = pow((-1), i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		cout << a << " ";
	}
}