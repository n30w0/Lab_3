#pragma once
#include "pch.h"
#include <cmath>
#include <iostream>
#include <cmath>
double sum2(double eps) {
	double a, summ;
	int i = 0;
	a = pow((-1),i)*(pow(i,2) + 1) / (pow(i,3) + 3);
	summ = a;
	for (int i = 0;; ++i) {
        a = pow((-1), i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
        summ += a;
        if (abs(a) <= eps)
        break;
        }
	return summ;
}