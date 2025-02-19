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
	if(NUMBER % 2 != 0)
		return EvenOrOdd::OOD_NUMBER;
	else
		return EvenOrOdd::EVEN_NUMBER;
}

int sumOddNumbersFrom1ToN_UsingWhile(const int& NUMBER)
{
	
	int counter = 0;
	int sum = 0;

	std::cout << "Sum odd numbers using (while statement):\n";

	while(counter <= NUMBER)
	{
		if(checkOddOrEven(counter) == EvenOrOdd::OOD_NUMBER)
		{
			sum += counter;
		}
		counter++;

	}
	return sum;
}

int sumOddNumbersFrom1ToN_UsingDoWhile(const int& NUMBER)
{
	
	int counter = 0;
	int sum = 0;

	std::cout << "Sum odd numbers using (do while statement):\n";

	do
	{
		if(checkOddOrEven(counter) == EvenOrOdd::OOD_NUMBER)
		{
			sum += counter;
		}
	counter++;
	} while(counter <= NUMBER);

	return sum;
}


int sumOddNumbersFrom1ToN_UsingFor(const int& NUMBER)
{

	int sum = 0;

	std::cout << "Sum odd numbers using (for statement):\n";

	for(int counter = 0; counter <= NUMBER; counter++)
	{
		if(checkOddOrEven(counter) == EvenOrOdd::OOD_NUMBER)
		{
			sum += counter;
		}
	}

	return sum;
}

int main()
{
	int readNumberFromUser = readNumber();

	std::cout << sumOddNumbersFrom1ToN_UsingWhile(readNumberFromUser) << std::endl;
	std::cout << sumOddNumbersFrom1ToN_UsingDoWhile(readNumberFromUser) << std::endl;
	std::cout << sumOddNumbersFrom1ToN_UsingFor(readNumberFromUser) << std::endl;

	return 0;
}
