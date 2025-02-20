/*
Write a program to calculate N^M.
*/

#include <iostream>

int readNumber()
{
	int number;
	std::cout << "Enter a number, Please?" << std::endl;
	std::cin >> number;

	return number;
}

int readM()
{
	int m;
	std::cout << "Enter the power, Please?" << std::endl;
	std::cin >> m;

	return m;
}

int powerOfM(const int& NUMBER, const int& M)
{
	if(M == 0)
	{
		//Any number powered to zero gives 1.
		return 1;
	}
	
	int power = 1;
	for(int i = 1; i <= M; ++i)
	{
		power = power * NUMBER;
	}
	return power;
}


int main()
{
	int result = powerOfM(readNumber(), readM());

	std::cout << "Result is: " << result << std::endl;

	return 0;
}
