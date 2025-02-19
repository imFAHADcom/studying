#include <iostream>


int readNumber()
{
	int number;

	std::cout << "Enter number? " << std::endl;
	std::cin >> number;

	return number;
}


void printRangeFromNto1UsingWhile(const int& NUMBER)
{
	std::cout << "Range printed using while statement:\n";
	int counter = NUMBER;
	while(0 < counter)
	{

		std::cout << counter << std::endl;
		counter--;
	}
}

void printRangeFromNto1UsingDoWhile(const int& NUMBER)
{
	std::cout << "Range printed using do while statement:\n";
	int counter = NUMBER;
	do
	{
		std::cout << counter << std::endl;
		counter--;

	} while(0 < counter);

}


void printRangeFromNto1UsingFor(const int& NUMBER)
{
	
	std::cout << "Range printed using for statement:\n";
	
	for(int counter = NUMBER; 0 < counter; counter--)
	{
		std::cout << counter<< std::endl;
	}
}


int main()
{
	int readNumberFromUser = readNumber();

	printRangeFromNto1UsingWhile(readNumberFromUser);
	printRangeFromNto1UsingDoWhile(readNumberFromUser);
	printRangeFromNto1UsingFor(readNumberFromUser);
	return 0;
}
