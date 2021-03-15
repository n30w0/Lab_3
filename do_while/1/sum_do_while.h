#pragma once
#include "pch.h"
#include <iostream>
#include <cmath>
double sum(int n)
{
	int i = 0;
	double sum = 0;
	do
	{
		sum += pow((-1), i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		i++;
	} while (i <= (n - 1));
	return sum;
}