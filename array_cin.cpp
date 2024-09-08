#include <iostream>

int main() {
	float GPA[3], GPAaverage;
	
	std::cout << "Enter grande 1, please? \n";
	std::cin >> GPA[0];
	std::cout << "Enter grande 2, please? \n";
	std::cin >> GPA[1];
	std::cout << "Enter grande 3, please? \n";
	std::cin >> GPA[2];

	GPAaverage = (GPA[0] + GPA[1] +GPA[2]) / 3;

	std::cout << "****************************\n";
	std::cout << "The average of grande is: " << GPAaverage << std::endl;

	return 0;
}
