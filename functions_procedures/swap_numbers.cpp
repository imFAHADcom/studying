#include <iostream>

void printNumber() {

	int number1, number2, numberSwap;

	std::cout << "Enter number 1?\n";
	std::cin >> number1;	
	std::cout << "Enter number 2?\n";
	std::cin >> number2;

	std::cout << "\n"<< number1 << "\n";
	std::cout << number2 << "\n";

	numberSwap = number1;
	number1 = number2;
	number2 = numberSwap;
	
	std::cout << "\n" << number1 << "\n";
	std::cout << number2 << "\n";


}

int main(){
	printNumber();


	return 0;
}
