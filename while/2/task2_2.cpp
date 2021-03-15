#include "pch.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "sum2_while.h"
using namespace std;
double sum2(double eps);
int main()
{
	double eps;
	cout << "Enter a value eps = "; cin >> eps;
	cout << "The calculation result is " << sum2(eps) << endl;
}

