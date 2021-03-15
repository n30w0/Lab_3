#pragma once
#include <cmath>
using namespace std;
int findFirstNegativeElement_1(double eps)
{
	double a;
	int i;
	for (i = 0;; ++i)
	{
		a = pow((-1), i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		if (abs(a) <= eps && a < 0)
			break;
	}
	return i;
}