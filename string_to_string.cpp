#include <iostream>
#include <string>

int main() {

	// Declare variables
	std::string numberOne = "10", numberTwo = "20";
	std::string sum = numberOne + numberTwo; // equal 1020
	int total = stoi(numberOne) + stoi(numberTwo); // equal 30
	std::string lettersOfEnglish = "A B CDEFGHIJKLMNOPQRSTUVWXYZ" ;
	
	// Outputs
	std::cout << "string numberOne \"10\" + string numberTwo \"20\" = " << sum << "\n";
	std::cout << "integer numberOne 10 + integer numberTwo 20 = " << total << "\n";
	std::cout << "The length of the lettersOfEnglish is: " << lettersOfEnglish.length() << "\n";
	std::cout << "The length of the lettersOfEnglish is: " << lettersOfEnglish[3] << "\n"; // print D



	return 0;
};
