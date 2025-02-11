#include <iostream>


void readNumbers(int array[])
{
	std::cout << "Enter number 1\n";
	std::cin >> array[0];
	std::cout << "Enter number 2\n";
	std::cin >> array[1];
	std::cout << "Enter number 3" << std::endl;
	std::cin >> array[2];
}

int sumOf3Numbers(const int (&array)[3])
{
	return array[0] + array[1] + array[2];
}

void printTotal(const int& total)
{
	std::cout << "*****************************\n" << "The total of sum numbers is: " << total << std::endl;
}


int main()
{
	int array[3];
	readNumbers(array);
	printTotal(sumOf3Numbers(array));
	return 0;
}
