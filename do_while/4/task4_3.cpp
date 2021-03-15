#include <iostream>
#include <cmath>
#include "pch.h"
#include "findFirstElement3.h"
using namespace std;
int findFirstElement3(double eps);
void main()
{
	double eps;
	cout << "Enter a value eps = "; cin >> eps;
	cout << "The calculation result is " << findFirstElement3(eps) << endl;
}