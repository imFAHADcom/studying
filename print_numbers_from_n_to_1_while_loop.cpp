#include <iostream>


int getUserInput() 
	{
		int number;
		std::cout << "Enter number, pleas? \n";
		std::cin >> number;
		std::cout << "*****************************" << std::endl;	

		return number;
	}


void printDownNumber(int number)
	{
		int counter = 1;
		while(number >= counter) 
		{
			std::cout << number << std::endl;
			number--;
		}
	}



int main(){

	printDownNumber(getUserInput());


	return 0;
}
