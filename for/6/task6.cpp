#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <conio.h>
#include "sum_for.h"
#include "sum2_for.h"
#include "void_print_1.h"
#include "findFirstElement1.h"
#include "findFirstNegativeElement1.h"
using namespace std;
int n;
int main() {
	while (true) {
		double n, k, eps; n = 0; k = 0; eps = 0;
		cout << "Choose a task" << endl;
		cout << "1 - Task1" << endl;
		cout << "2 - Task2" << endl;
		cout << "3 - Task3" << endl;
		cout << "4 - Task4" << endl;
		cout << "5 - Task5" << endl;
		cout << "6 - exit" << endl;
		switch (_getch()) {
		case '1':
			system("cls");
			double sum(int n);
			cout << "Enter a value n = "; cin >> n;
			cout << "The calculation result is " << sum(n) << endl;
			system("pause");
			system("cls");
			break;
		case '2':
			system("cls");
			double sum2(double eps);
			cout << "Enter a value eps = "; cin >> eps;
			cout << "The calculation result is " << sum2(eps) << endl;
			system("pause");
			system("cls");
			break;
		case '3':
			system("cls");
			void print1(int n, int k);
			cout << "Enter a value n = "; cin >> n;
			cout << "Enter a value k = "; cin >> k;
			print1(n, k);
			system("pause");
			system("cls");
			break;
		case '4':
			system("cls");
			cout << "Enter a value eps = "; cin >> eps;
			cout << "The calculation result is " << findFirstElement_1(eps) << endl;
			system("pause");
			system("cls");
			break;
		case '5':
			system("cls");
			cout << "Enter a value eps = "; cin >> eps;
			cout << "The calculation result is " << findFirstNegativeElement_1(eps) << endl;
			system("pause");
			system("cls");
			break;
		case '6':
			return 1;
		default:
			cout << "Wrong enter" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}
