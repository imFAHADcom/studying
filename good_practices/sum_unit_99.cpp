/*
Write a program to read numbers from user and sum them, keep reading until the user enters -99 then print the Sum on screen.

Input:
10
20
30
40
-99

Outputs:
100
*/

#include <iostream>
#include <string>

float readNumbers(std::string message)
{
	float number = 0;
	std::cout << message << std::endl;
	std::cin >> number;
	
	return number;
}

float sumNumbers()
{
	int sum = 0, getNumber = 0, counter = 1;
	do
	{
		
		getNumber = readNumbers("Enter number, Please " + std::to_string (counter));

		if(getNumber == -99)
		{
			break;
		}

		sum += getNumber;	
		++counter;
	} while(getNumber != -99);
	

	return sum;

}


int main()
{
	std::cout << sumNumbers() << std::endl;

	return 0;
}
