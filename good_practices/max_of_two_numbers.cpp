#include <iostream>


void readNumbers(int& number1, int& number2)
{
	std::cout << "Enter number 1, Please?\n";
	std::cin >> number1;
	std::cout << "Enter number 2, Please?" << std::endl;
	std::cin >> number2;
}

int checkMaxOfNumbers(const int& NUMBER1, const int& NUMBER2)
{
	if(NUMBER1 > NUMBER2)
		return NUMBER1;
	else
		return NUMBER2;
}

void printResult(const int& MAX_NUMBER)
{
		std::cout <<  "The Maximum Number is: " << MAX_NUMBER << std::endl;
}


int main()
{

	int number1, number2;

	readNumbers(number1, number2);
	printResult(checkMaxOfNumbers(number1, number2));


	return 0;
}
