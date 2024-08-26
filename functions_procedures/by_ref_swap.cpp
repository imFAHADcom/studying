#include <iostream>

/*
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
*/

void numbersFunction(int& numberOne, int& numberSecond) {

	int numberSwap;

	numberSwap = numberOne;
	numberOne = numberSecond;
	numberSecond = numberSwap;

	std::cout << "After swap inside function numberOne = " << numberOne << " numberSecond = " << numberSecond << std::endl;
}




int main(){
//	printNumber();

	int numberOne, numberSecond;

	std::cout << "Enter number 1?\n";
	std::cin >> numberOne;	
	std::cout << "Enter number 2?\n";
	std::cin >> numberSecond;

	std::cout << "Before swap numberOne = "<< numberOne << " numberSecond = " << numberSecond << "\n";

	numbersFunction(numberOne, numberSecond);
	std::cout << "After swap inside Main the function numberOne = " << numberOne << " numberSecond = " << numberSecond << std::endl;


	return 0;
}
