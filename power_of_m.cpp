#include <iostream>



void readUserInput(signed int& base, signed int& exponent){

	std::cout << "Enter base? " << std::endl;
	std::cin >> base;
	std::cout << "Enter exponent? " << std::endl;
	std::cin >> exponent;

}


void numberPower(signed int& base, signed int& exponent) {

	signed int result = 1; 

	for(signed int i = 1; exponent >= i; ++i) {
		result *= base;
	}

	std::cout << result << std::endl;
}


int main() {
	signed int userBase, userExponent;

	readUserInput(userBase,userExponent);
	numberPower(userBase,userExponent);

	return 0;
}
