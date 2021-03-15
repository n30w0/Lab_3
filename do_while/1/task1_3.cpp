#include <iostream>
#include <cmath>
#include "pch.h"
#include "sum_do_while.h"
using namespace std;
double sum(int n);
void main()
{
	int n;
	cout << "Enter a value n = "; cin >> n;
	cout << "The calculation result is " << sum(n) << endl;
}