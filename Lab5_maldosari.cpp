/**
 * @file Lab5_maldosari.cpp
 * @author Musab Aldosari
 * @date 2026-10-05
 * @brief A modular program to generate a multiplication table using functions.
 */

#include <iostream>
using namespace std;

/**
 * @brief Prints an error message when the user input is invalid.
 * @param None
 * @return None
 */
void printInputValidationError() {
	cout << "Error: The max digit must be greater than 4 and less than 10." << endl;
	cout << "Please retry." << endl;
}

/**
 * @brief Checks whether input is in the valid range.
 * @param input the number entered by user.
 * @return True if the input is valid, otherwise false.
 */
bool isMaxDigitInputValid(int input) {
	if (input > 4 && input < 10) {
		return true;
	}
	else {
		return false;
	}
}

/**
 * @brief Prompts the user for a maximum digit and repeats until it is valid.
 * @param None
 * @return The valid maximum digit entered by the user.
 */
int getMaxDigitInput() {
	int maxDigit;
	cout << "Please enter the maximum digit for the multiplication table." << endl;
	cout << "The digit must be greater than 4 and less than 10." << endl;
	cout << "Max digit: ";
	cin >> maxDigit;

	while (isMaxDigitInputValid(maxDigit) == false) {
		printInputValidationError();

		cout << "Max Digit: ";
		cin >> maxDigit;
	}
	return maxDigit;
}

/**
 * @brief Prints the multiplication table.
 * @param maxDigit The highest number to include in the table.
 * @return None
 */
void printMultiplicationTable(int maxDigit) {
		for (int row = 1; row <= maxDigit; row++) {
			for (int column = 1; column <= maxDigit; column++) {
				cout << row * column << "\t";
			}
			cout << endl;
		}
	}

/**
 * @brief Starts the program and calls the other functions.
 * @param None
 * @return 0 when the program finishes successfully.
 */
int main() {
	int maxDigit = getMaxDigitInput();
	printMultiplicationTable(maxDigit);
	return 0;
}