#include <iostream>
#include <cmath>

void powerOf234(double number) {

	std::cout << pow(number, 2) << "\n";
	std::cout << pow(number, 3) << "\n";
	std::cout << pow(number, 4) << std::endl;
}

int main() {
	
	double enterNumber;

	std::cout << "Enter number? \n";
	std::cin >> enterNumber;

	powerOf234(enterNumber);	


	return 0;
}
