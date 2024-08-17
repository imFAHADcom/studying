#include <iostream>
#include <string>

void printName(std::string fullName){
	
	std::cout << "Enter your full name, Please? \n";
	getline(std::cin, fullName);
	std::cout << "My name: " << fullName << std::endl;
	
}


int main() {
	std::string yourName;

	printName(yourName);

	return 0;
}
