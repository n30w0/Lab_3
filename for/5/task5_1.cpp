#include "pch.h"
#include <iostream>
#include <cmath>
#include "findFirstNegativeElement1.h"
using namespace std;
int findFirstNegativeElement_1(double eps);
void main()
{
	double eps;
	cout << "Enter a value eps = "; cin >> eps;
	cout << "The calculation result is " << findFirstNegativeElement_1(eps) << endl;
}