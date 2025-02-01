#include <iostream>


signed int getUserNumber()
{
	signed int number;
	std::cout << "Enter number. Please?\n";
	std::cin >> number;
	std::cout << "***********************************" << std::endl;


	return number;

}



void printFactorialOfNumber(signed int number)
{
	signed int i = 1;
	signed int sum = 1;

	do 
	{
		sum = sum * number;
		number--;	
	} while(i <= number);

	std::cout << sum << std::endl;
}


int main()
{
	
	printFactorialOfNumber(getUserNumber());

	return 0;
}
