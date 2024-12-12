#include <iostream>

void readAge(unsigned short int& age) {
	std::cout << "Enter your age? \n";
	std::cin >> age; 
}


void validateAge(unsigned short int age) {
	if ( age >= 18 && age <= 45) {
		std::cout << "Valid Age" << std::endl;

	} 
	else {
		std::cout << "Invalid Age" << std::endl;
		}
}

int main() {
	unsigned short int userAge;

	readAge(userAge);
	validateAge(userAge);

	return 0;
}
