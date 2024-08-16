#include <iostream>
#include <string>

int main() {

	int number;
	std::string name, country;

	std::cout << "pleas Enter Employee Number?\n";
	std::cin >> number;

	std::cout << "Please Enter Name?\n";
	std::cin.ignore(1,'\n');
	getline(std::cin, name);

	std::cout << "Please Enter country?\n";
	std::cin >> country;

	std::cout << "Number: " << number << "\nName: " << name << "\nCountry: " << country << std::endl;


	return 0;
}
