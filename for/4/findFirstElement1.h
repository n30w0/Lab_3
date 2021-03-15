#pragma once
#include <cmath>
int findFirstElement_1(double eps)
{
	double a;
	int i;
	for (i = 0;; ++i)
	{
		a = pow((-1), i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		if (abs(a) <= eps)
			break;
	}
	return i;
}