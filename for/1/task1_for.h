#pragma once
#include "pch.h"
#include <iostream>
#include <cmath>
double sum(int n)
	{
		double sum = 0;
		for (int i = 0; i <= (n - 1); ++i)
		{
			sum += pow((-1), i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		}
		return sum;
	}

