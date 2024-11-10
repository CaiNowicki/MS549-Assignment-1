#include <iostream>
#include "functions.h"

using namespace std;

int main() {
	int choice = 0;
	int a;
	int b;
	double result;

	while (choice != 5) {
		showMenu();
		cout << "Enter the number for the menu item of your choice: ";
		cin >> choice;
		if (choice == 5) {
			break;
		}
		cout << "Enter first value: ";
		cin >> a;
		cout << "Enter second value: ";
		cin >> b;
		if (choice == 1) {
			result = addition(a, b);
		}
		else if (choice == 2) {
			result = subtraction(a, b);
		}
		else if (choice == 3) {
			result = multiplication(a, b);
		}
		else if (choice == 4) {
			result = division(a, b);
		}
		else {
			cout << "Invalid option. Please try again." << endl;
			continue;
		}
		if (isnan(result)) {
			continue;
		}
		else {
			cout << result;
		}


	}
	return 0;
}