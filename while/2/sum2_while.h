#pragma once
#include "pch.h"
#include <cmath>
double sum2(double eps) {
	double a, summ;
	int i = 0;
	a = pow((-1), i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
	summ = a;
	while (abs(a) >= eps) {
		i++;
		a = pow((-1), i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		summ += a;
	}
	return summ;
}