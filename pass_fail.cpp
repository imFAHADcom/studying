#include <iostream>

int main() {
	float mark;

	std::cout << "Enter you Mark? \n";
	std::cin >> mark;

	if ( mark >= 50 ) {
		std::cout << "PASS" << std::endl;
	}
	else {
		std::cout << "FAIL" << std::endl;
		}


	return 0;
}
