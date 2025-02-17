#include <iostream>
#include <cmath>

unsigned short int readUserInput()
{
	unsigned short int age;

	std::cout << "Enter your age. Please?" << std::endl;
	std::cin >> age;

	return age;
}

bool validateNumberInRange(int number, int from, int to)
{
	return (number >= from && number <= to);
}


void printResult(unsigned short int age)
{
	if(validateNumberInRange(age, 18, 45))
		std::cout << age << " is a vaild age" << std::endl;
	else
		std::cout << age <<  " is invalid age" << std::endl;
}


int main()
{
	printResult(readUserInput());

	return 0;
}
