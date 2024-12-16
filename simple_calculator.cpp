#include <iostream>


void readUser(unsigned short int& num1,unsigned short int& num2, char& operationType) {
	std::cout << "Enter first number (integer): " << std::endl;
	std::cin >> num1;
	std::cout << "Enter second number (integer): " << std::endl;
	std::cin >> num2;
	std::cout << "Enter operation (+, -, *, /): " << std::endl;
	std::cin >> operationType;
}

void calculator(unsigned short int num1,unsigned short int num2, char operationType) {	
	double result;

	const char add = '+';
	const char subtract = '-';
	const char multiply = '*';
	const char divide = '/';

	if (operationType == add) {
		result = num1 + num2;
		std::cout << "Result is: " << result << std::endl;
	}
	else if (operationType == subtract) {

		if (num1 < num2) {
			std::cout << "The first number is smaller than the second number. We cannot complete the subtraction operation. " << std::endl;
		}
		else {
		result = num1 - num2;	
		std::cout << "Result is: " << result << std::endl;
		}
	}
	else if (operationType == multiply) {
		result = num1 * num2;
		std::cout << "Result is: " << result << std::endl;
	}
	else if (operationType == divide) {
		if (num2 == 0) {
	           std::cout << "Error: Division by zero" << std::endl;
		}
		else {
		result = num1 / num2;
		std::cout << "Result is: " << result << std::endl;
		}
	}
	else {
		std::cout << "Invalid operation type. Please use one of (+, -, *, /)." << std::endl;
	}

}


int main() {
	unsigned short int userNum1, userNum2;
	char userOperationType;

	readUser(userNum1,userNum2,userOperationType);
	calculator(userNum1,userNum2,userOperationType);

	return 0;
}
