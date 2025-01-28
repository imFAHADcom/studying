#include <iostream>


int main() {

	int number;
	std::cout << "Enter positive number, please ?\n";
	std::cin >> number;

	while(number < 0)
	{
		std::cout << "\nWrong entered!! \n" << "Enter positive number again, please?\n";
		std::cin >> number;
	}
	
	std::cout << "\nPositive number is: " << number << std::endl;

	return 0;
}
