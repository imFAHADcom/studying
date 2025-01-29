#include <iostream>


signed short int getUsetInput()
{
	int number;

	std::cout << "Enter number integer please? \n"; 
	std::cin >> number;
	std::cout << "******************" << std::endl;

	return number;
}


void printSumEvenNumbers(signed short int number)
{
	signed short int counter = 1;
	signed short int sum = 0;
	while (number >= counter)
	{
		if(counter % 2 == 0) 
		{
			sum = sum + counter;
		}
	
		counter++;
	}
	
//	std::cout << "The sum even numbers  in (" << number <<  ") is: " << sum << std::endl;
	std::cout << sum << std::endl;
}


int main() {

	printSumEvenNumbers(getUsetInput());



	return 0;
}
