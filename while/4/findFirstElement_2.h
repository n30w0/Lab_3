#pragma once
#include <iostream>
#include <cmath>
using namespace std;
int findFirstElement2(double eps)
{
	double a;
	int i = 0;
	while (i <= numeric_limits<int>::max())
	{
		a = pow((-1), i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		if (abs(a) <= eps)
			break;
		else
			i++;
	}
	return i;
}