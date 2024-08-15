#include <iostream>
#include <string>
int main() {

	std::string string1, string2, string3;

	std::cout << "Please Enter string1? ";
	std::getline(std::cin,string1);

	std::cout << "Please Enter string2? ";
	std::cin >> string2;

	std::cout << "Please Enter string3? ";
	std::cin >> string3;


	// calculate
	int result = stoi(string2) * stoi(string3);
	//outputs
	std::cout << "********************************\n";
	std::cout << "The Length of string1 is: " << string1.length() << "\n";
	std::cout << "Characters string1 at 0,2,4,7 are: " << string1[0] << " "  << string1[2] << " " << string1[4] << " " << string1[7] << " " << "\n";
	std::cout << "Concatenating string2 and string3 = " << string2 + string3 << "\n";
	std::cout << string2 << " * " << string3 << " = " << result  << std::endl;

	return 0;
};
