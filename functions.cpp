#include <iostream>
#include "functions.h"
using namespace std;

int addition(int a, int b) {
	return a + b;
}

int subtraction(int a, int b) {
	return a - b;
}

int multiplication(int a, int b) {
	return a * b;
}

double division(double a, double b) {
	if (b == 0) {
		cerr << "Error: Division by 0 is undefined" << endl;
		return NAN;
	}
	return a / b;
}

void showMenu() {
	cout << "\n**Menu**\n";
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Exit Program" << endl;
}