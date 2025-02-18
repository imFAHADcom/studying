#include <iostream>

int readNumberInputed()
{
	int number;
	std::cout << "Enter number, Please" << std::endl;
	std::cin >> number;

	return number;
}


void printRangeFrom1toNUsingWhileLoop(const int& NUMBER)
{
	
	std::cout << "Range print using while loop statement:\n";
	int counter = 0;
	while(counter < NUMBER)
	{
		++counter;
		std::cout << counter << std::endl;
	}
}

void printRangeFrom1toNUsingDoLoop(const int& NUMBER)
{
	std::cout << "Range print using do loop statement:\n";

	int counter = 0;
	do
	{
		++counter;
		std::cout << counter << std::endl;
	} while(counter < NUMBER);
	
	
}


void printRangeFrom1toNUsingForLoop(const int& NUMBER)
{
	std::cout << "Range print using for loop statement:\n";

	for(int counter = 1; counter < NUMBER; ++counter)
	{
		std::cout << counter << std::endl;
	}
}


int main()
{
	int readNumber = readNumberInputed();

	printRangeFrom1toNUsingDoLoop(readNumber);
	printRangeFrom1toNUsingForLoop(readNumber);
	printRangeFrom1toNUsingWhileLoop(readNumber);

	return 0;
}
