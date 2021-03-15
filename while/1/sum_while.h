#pragma once
#include "pch.h"
#include <cmath>
double sum(int n)
{
	int i = 0;
	double summ = 0;
	while (i <= (n - 1))
	{
		summ += pow((-1), i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		i++;
	}
	return summ;
}