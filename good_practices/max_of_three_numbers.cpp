#include <iostream>

void readNumbers(unsigned short int& number1, unsigned short int& number2, unsigned short int& number3)
{
	std::cout << "Enter number 1, Please?\n";
	std::cin >> number1;
	std::cout << "Enter number 2, Please?\n";
	std::cin >> number2;
	std::cout << "Enter number 3, Please?" << std::endl;
	std::cin >> number3;
}

unsigned short int checkMaxOfThreeNumbers(const unsigned short int& NUMBER1, const unsigned short int& NUMBER2, const unsigned short int& NUMBER3)
{
	if(NUMBER1 > NUMBER2)
		if(NUMBER1 > NUMBER3)
			return NUMBER1;
		else
			return NUMBER3;
	else if(NUMBER2 > NUMBER3)
		return NUMBER2;
	else
		return NUMBER3;
}

void printResult(const unsigned short int& MAX_NUMBER)
{

	std::cout << "The max number Of three is: " << MAX_NUMBER << std::endl;
}

int main()
{
	unsigned short int number1, number2, number3;

	readNumbers(number1, number2, number3);
	printResult(checkMaxOfThreeNumbers(number1, number2, number3));

	return 0;
}
