#include <iostream>

void readGPA(float GPA[3]) {

	std::cout << "Enter grande 1, please? \n";
	std::cin >> GPA[0];
	std::cout << "Enter grande 2, please? \n";
	std::cin >> GPA[1];
	std::cout << "Enter grande 3, please? \n";
	std::cin >> GPA[2];
}

float calculateGPAaverage(float GPA[3]) {
	
	return (GPA[0] + GPA[1] + GPA[2]) / 3;
}

int main() {
	float grande[3];

	grande[0] = 35; //assiment array before function
	std::cout << "Before function grande[0] is: " << grande[0] << "\n\n"; // print array before function

	readGPA(grande);

	std::cout << "*****************************\n";
	std::cout << "The average of grande is: " << calculateGPAaverage(grande) << "\n";

	std::cout << "\nAfter function grande[0] is: " << grande[0] << std::endl; // We conclude here that the array is called in the function by reference by default.


	return 0;
}
