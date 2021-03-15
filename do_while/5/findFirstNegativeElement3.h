#pragma once
#include <iostream>
#include <cmath>
using namespace std;
int findFirstNegativeElement_3(double eps)
{
	double a;
	int i = 0;
	do
	{
		a = pow((-1), i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		if (abs(a) <= eps)
			break;
		else
			i++;
	} while (i <= numeric_limits<int>::max());
	return i;
}
