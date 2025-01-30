#include <iostream>

signed int getUserNumber()
{
	signed int number;

	while(true)
	{
		std::cout << "Enter the positive number whose factorial you want to calculate., Please? \n";
		std::cin >> number;
		if (number >= 0){
			return number;
		}
		else
		{ 
			std::cout << "Invalid input. Please enter a positive number" << std::endl;
		}
	

	}

	std::cout << "***************************" << std::endl; 
}


void printFactorialNumber(signed int number) 
{

	signed int counter = 1;
	signed int factorial = 1;
	signed int numberCopy = number;

	while(number >= counter) 
	{
		factorial = factorial * number ;
		number--;
	}
	std::cout << "Factoiral of (" << numberCopy << "): "  << factorial << std::endl;
}



int main() 
{
	printFactorialNumber(getUserNumber());




	return 0;
}
