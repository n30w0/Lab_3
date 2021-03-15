#include "pch.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "task1_for.h"
using namespace std;
double sum(int n);
int main()
{
	int n;
	cout << "Enter a value n = "; cin >> n;
	cout << "The calculation result is " << sum(n) << endl;
}