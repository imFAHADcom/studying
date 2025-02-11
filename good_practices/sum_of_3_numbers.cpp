#include <iostream>


void readNumbers(int& number1, int& number2, int& number3)
{
	std::cout << "Enter number 1\n";
	std::cin >> number1;
	std::cout << "Enter number 2\n";
	std::cin >> number2;
	std::cout << "Enter number 3" << std::endl;
	std::cin >> number3;
}

int sumOf3Numbers(const int& number1, const int& number2, const int& number3)
{
	return number1 + number2 + number3;
}

void printTotal(const int& total)
{
	std::cout << "*****************************\n" << "The total of sum numbers is: " << total << std::endl;
}


int main()
{
	int number1, number2, number3;

	readNumbers(number1, number2, number3);
	printTotal(sumOf3Numbers(number1, number2, number3));
	return 0;
}
