#include <iostream>



int readUserInput() {
	int number;
	std::cout << "Enter number ?\n";
	std::cin >> number;
	std::cout << "*****************" << std::endl;
	return number;
}

void printNumbersUpTo(int number){

	int counter = 1;
	while(number >= counter)
	{
		std::cout << counter << std::endl;
		counter++;
	}

}

int main() {

	printNumbersUpTo(readUserInput());

	return 0;
}
