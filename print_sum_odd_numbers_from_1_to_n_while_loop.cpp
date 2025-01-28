#include <iostream>



int getUserInput()
{
	int number;
	std::cout << "Enter number, please? \n";
	std::cin >> number;
	std::cout << "******************" << std::endl;

	return number;
}


void printSumOddNumbers(int number)
{
	int counter = 1;
	int sum = 0;
	while(number >= counter) 
	{
		if(counter % 2 != 0)
		{
			sum = sum + counter;
		}
		counter++;	
	}
	
	std::cout << "Sum odd numbers in (" << number << ") is: " << sum << std::endl;

}


int main() 
{
	printSumOddNumbers(getUserInput());
	
	return 0;
}
