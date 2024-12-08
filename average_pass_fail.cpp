#include <iostream>

int main() {
	float mark1, mark2, mark3, average;

	std::cout << "Enter your Mark1\n";
	std::cin >> mark1;
	std::cout << "Enter your Mark2\n";
	std::cin >> mark2;
	std::cout << "Enter your Mark3\n";
	std::cin >> mark3;

	average = ( mark1 + mark2 + mark3 ) / 3;

	if ( average >= 50 ) {
		std::cout << "PASS" << std::endl;
	}
	else {
		std::cout << "FAIL" << std::endl;
	}

	return 0;
}
