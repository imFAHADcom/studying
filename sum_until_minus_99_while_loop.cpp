#include <iostream>


int getUserNumbers()
{
	int number;
	std::cout << "Enter number? " << std::endl;;
	std::cin >> number;
	return number;
}


void printSumUnitMinus99(int number)
{
	int sum = 0;
	if(number == -99)
	{
		sum += number;
	}
	else
	{
		while(number != -99)
		{
			sum += number;
			std::cout << "Enter number? " << std::endl;
			std::cin >> number;

		}
	}

	std::cout << "************************\n";
	std::cout << "sum is: " << sum << std::endl;
}


int main() 
{
	printSumUnitMinus99(getUserNumbers());


	return 0;
}
