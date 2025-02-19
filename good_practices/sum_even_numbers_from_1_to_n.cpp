#include <iostream>

enum EvenOrOdd{OOD_NUMBER = 1, EVEN_NUMBER = 2};

int readNumber()
{
	int number;
	std::cout << "Enter number, Please?" << std::endl;
	std::cin >> number;

	return number;
}

EvenOrOdd checkOddOrEven(const int& NUMBER)
{
	if(NUMBER % 2 == 0)
		return EvenOrOdd::EVEN_NUMBER;
	else
		return EvenOrOdd::OOD_NUMBER;
}

int sumEvenNumbersFromNTo1_UsingWhile(const int& NUMBER)
{
	int counter = 0;
	int sum = 0;

	std::cout << "Sum even numbers using (While statement):\n";

	while(counter <= NUMBER)
	{
		if(checkOddOrEven(counter) == EvenOrOdd::EVEN_NUMBER)
		{	
			sum += counter;
		}
	counter++;
	}
	return sum;
}


int sumEvenNumbersFromNTo1_UsingDoWhile(const int& NUMBER)
{

	int counter = 0;
	int sum = 0;

	std::cout << "Sum even numbers using (Do while statement):\n";

	do
	{
		if(checkOddOrEven(counter) == EvenOrOdd::EVEN_NUMBER)
		{
			sum += counter;
		}
	counter++;
	} while(counter <= NUMBER);

	return sum;
}

int sumEvenNumbersFromNTo1_UsingFor(const int& NUMBER)
{
	
	int sum = 0;

	std::cout << "Sum even numbers using (For statement):\n";

	for(int counter = 0; counter <= NUMBER; counter++)
	{
		if(checkOddOrEven(counter) == EvenOrOdd::EVEN_NUMBER)
		{
			sum += counter;
		}
	counter++;
	}

	return sum;
}

int main()
{
	int readNumberFromUser = readNumber();

	std::cout << sumEvenNumbersFromNTo1_UsingWhile(readNumberFromUser) << std::endl;
	std::cout << sumEvenNumbersFromNTo1_UsingDoWhile(readNumberFromUser) << std::endl;
	std::cout << sumEvenNumbersFromNTo1_UsingFor(readNumberFromUser) << std::endl;

	return 0;
}
