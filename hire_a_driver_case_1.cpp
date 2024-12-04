#include <iostream>
#include <string>

int main() {
	unsigned short int age;
	std::string driver_license;
	bool isHaveLicense = false;

	std::cout << "Enter your age: \n";
	std::cin >> age;
	std::cout << "Do you have Driver license? if yes enter \"yes\" if NO enter \"no\" \n";
	std::cin >> driver_license;

	if ( driver_license == "yes" ) {
		isHaveLicense = true;
	}
	else if  ( driver_license == "no" ) {
		isHaveLicense = false;
	} 	
	else {
		std::cout << "Invalid input. Please enter \"yes\" or \"no\".\n";
		return 1;
	}


	if ( age >= 21 && isHaveLicense ) {

		std::cout << "\nHired\n" << std::endl;
	}
	else {
		std::cout << "\nRejected\n" << std::endl;
	}

	std::cout << "End program" << std::endl;

	return 0;
}
