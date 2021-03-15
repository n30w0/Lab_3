#include "pch.h"
#include <cmath>
#include <iostream>
#include "sum2_for.h"
using namespace std;
double sum2(double eps);
int main()
{
	double eps;
	cout << "Enter a value eps = "; cin >> eps;
	cout << "The calculation result is " << sum2(eps) << endl;
}