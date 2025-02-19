#include <iostream>

int readiPostiveNumber(const std::string& MESSAGE)
{
	int number;
	do{
		std::cout << MESSAGE << std::endl;
		std::cin >> number;

	} while(number < 0);

	return number;
}

int factorialOfNumber(const int& NUMBER)
{
	int factorial = 1;
	for(int counter = NUMBER; counter > 1; counter--)
	{
		factorial = factorial * counter;
	}
	

	return factorial;
}

int main()
{
	std::cout << factorialOfNumber(readiPostiveNumber("Enter Number, Please?")) << std::endl;

	return 0;
}
