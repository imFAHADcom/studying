#include <iostream>


signed short int readInput() {
	signed short int userInput;

	while(true) {
	std::cout << "Enter the your grade:(0-100) " << std::endl;
	std::cin >> userInput;
		if (userInput >= 0 && userInput <= 100) {
			return userInput;
		}
		else {
			std::cout << "wrong entered, try again!!, enter (0-100)" << std::endl;
		}
	}	
}

void checkGrandeUser(unsigned short int userInput){

	if (userInput >= 90) {
		std::cout << "A" << std::endl;
	}	
	else if (userInput >= 80) {
		std::cout << "B" << std::endl;
	}
	else if (userInput >= 70) {
		std::cout << "C" << std::endl;
	}
	else if (userInput >= 60) {
		std::cout << "D" << std::endl;
	}
	else {
		std::cout << "F" << std::endl;
	}


}




int main() {
	checkGrandeUser(readInput());









	return 0;
}
