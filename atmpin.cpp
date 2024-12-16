#include <iostream>

void readPinCode(unsigned short int& pinCode) {
	std::cout << "Enter pin code? " << std::endl;
	std::cin >> pinCode;
}


void validatePinCode(unsigned short int pinCode) {
	if ( pinCode == 1234 ) {
		std::cout << "Your Balance is: 7500" << std::endl;
	}
	else {
		std::cout << "Wrong PIN" << std::endl;
	}
	}

int main() {
	unsigned short int userPinCode;

	readPinCode(userPinCode);
	validatePinCode(userPinCode);
	
	return 0;
}
