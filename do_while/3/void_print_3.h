#pragma once
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
void print3(int n, int k)
{
	int i = 0;
	double sum = 0;
	do
	{
		if (i % k == k - 1) {
			i++;
			continue;
		}
		sum += pow((-1), i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		cout << sum << " ";
		i++;
	} while (i <= (n));
}