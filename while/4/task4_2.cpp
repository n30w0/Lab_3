#include <iostream>
#include <cmath>
#include "pch.h"
#include "findFirstElement_2.h"
using namespace std;
int findFirstElement2(double eps);
void main()
{
	double eps;
	cout << "Enter a value eps = "; cin >> eps;
	cout << "The calculation result is " << findFirstElement2(eps) << endl;
}