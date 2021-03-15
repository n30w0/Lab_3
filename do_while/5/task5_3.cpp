#include <iostream>
#include <cmath>
#include "pch.h"
#include "findFirstNegativeElement3.h"
using namespace std;
int findFirstNegativeElement_3(double eps);
void main()
{
	double eps;
	cout << "Enter a value eps = "; cin >> eps;
	cout << "The calculation result is " << findFirstNegativeElement_3(eps) << endl;
}