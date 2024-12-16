#include <iostream>

const unsigned short int vaildPin = 1234;

void readPinCode(unsigned short int& pinCode) {
	std::cout << "Enter pin code? " << std::endl;
	std::cin >> pinCode;
}


void checkPinCode(unsigned short int pinCode) {
	if ( pinCode == vaildPin ) {
		std::cout << "PIN correct. Your Balance is: 7500" << std::endl;
	}
	else {
		std::cout << "Wrong PIN" << std::endl;
	}
	}

int main() {
	unsigned short int userPinCode;

	readPinCode(userPinCode);
	checkPinCode(userPinCode);
	
	return 0;
}
