#include "pch.h"
#include <iostream>
#include <cmath>
#include "findFirstElement1.h"
using namespace std;
int findFirstElement_1(double eps);
void main()
{
	double eps;
	cout << "Enter a value eps = "; cin >> eps;
	cout << "The calculation result is " << findFirstElement_1(eps) << endl;
}