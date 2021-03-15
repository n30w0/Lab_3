#include <iostream>
#include <cmath>
#include "pch.h"
#include "findFirstNegativeElement2.h"
using namespace std;
int findFirstNegativeElement2(double eps);
void main()
{
	double eps;
	cout << "Enter a value eps = "; cin >> eps;
	cout << "The calculation result is " << findFirstNegativeElement2(eps) << endl;
}