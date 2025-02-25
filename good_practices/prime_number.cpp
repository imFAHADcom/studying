/*
Write a program to read a number and check if it is a prime number or not.

Note: Prime number can only divide on one and on itself.

Inputs:
5
6
3

Outputs:
Prime
Not Prime
prime
*/

#include <iostream>
#include <string>
#include <cmath>

enum enPrimeNotPrime { PRIME = 1, NOT_PRIME = 2 };


float readPostiveNumber(std::string message)
{
	int number = 0;

	do
	{	
		std::cout << message << std::endl;
		std::cin >> number;
	
	} while(number < 0);

	return number;
}

constexpr enPrimeNotPrime checkPrime(const int& NUMBER)
{
	int M = round(NUMBER / 2);

	for(int counter = 2; counter <= M; ++counter)
	{
		if(NUMBER % counter == 0)
			return enPrimeNotPrime::NOT_PRIME;
	}
	
	return enPrimeNotPrime::PRIME;
}


void printPrimeNotPrime(const int& NUMBER)
{
	if(checkPrime(NUMBER) == enPrimeNotPrime::NOT_PRIME)
		std::cout << "Number is not prime" << std::endl;
	else
		std::cout << "Number is prime" << std::endl;
}


int main()
{
	printPrimeNotPrime(readPostiveNumber("Enter positive number"));

	return 0;
}
