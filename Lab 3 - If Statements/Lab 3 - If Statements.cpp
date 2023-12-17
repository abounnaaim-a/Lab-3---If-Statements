// Lab 3 - If Statements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Divison" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value: ";
	cin >> A;
	cout << "Please enter the second value: ";
	cin >> B;
	cout << " " << endl;
}

void addition(float A, float B) {
	float result = A + B;
	cout << A << " + " << B << " = " << result << endl;
}
void subtraction(float A, float B) {
	float result = A - B;
	cout << A << " - " << B << " = " << result << endl;
}
void multiplication(float A, float B) {
	float result = A * B;
	cout << A << " * " << B << " = " << result << endl;
}
void division(float A, float B) {
	float result = A / B;
	cout << A << " / " << B << " = " << result << endl;
}


int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		addition(A, B);
	}
	if (choice == 2) {
		subtraction(A, B);
	}
	if (choice == 3) {
		multiplication(A, B);
	}
	if (choice == 4) {
		division(A, B);
	}
	return 0;
}