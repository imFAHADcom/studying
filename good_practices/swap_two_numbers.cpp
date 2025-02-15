#include <iostream>

void readNumber( int& number1,  int& number2)
{
	std::cout << "Enter number 1, Please?\n";
	std::cin >> number1;
	std::cout << "Enter number 2, Please?" << std::endl;
	std::cin >> number2;
}

void swapTwoNumbers( int& number1,  int& number2)
{


	number1 = number1 + number2;
	number2 = number1 - number2;
	number1 = number1 - number2;


/*
	number1 = number1 ^ number2;
	number2 = number1 ^ number2;
	number1 = number1 ^ number2;
*/
}


void printNumbersAfterSwap(const  int& number1, const  int& number2)
{

	std::cout <<"***************************************\n" << "Number 1 is : " << number1 << " Number 2 is: " << number2 << std::endl;

}

int main() 
{
	 int number1, number2;

	readNumber(number1, number2);
	printNumbersAfterSwap(number1, number2);
	swapTwoNumbers(number1, number2);
	printNumbersAfterSwap(number1, number2);


	return 0;
}
