#include <iostream>

void swapFunction(int& number1, int& number2) {

	int numberSwap;

	numberSwap = number1;
	number1 = number2;
	number2 = numberSwap;
}



int main() {
	int firstNumber, secondNumber;

	std::cout << "Enter first number? \n";
	std::cin >> firstNumber;
	std::cout << "Enter second number1? \n";
	std::cin >> secondNumber;

	std::cout << firstNumber << "	" << secondNumber << "\n";
	swapFunction(firstNumber,secondNumber);
	std::cout << firstNumber << "	" << secondNumber << "\n";


	return 0;
}
