#include <iostream>

void printStars() {
	
	std::cout << "*********************************" << std::endl;

}

void displayMyCardFunction() {
	
	printStars();
	
	std::cout << "Name: NoName NoName.\n";
	std::cout << "Age: 100 Years.\n";
	std::cout << "City: LocalHost.\n";
	std::cout << "Country: Server" << std::endl;

	printStars();

}


void printILoveProgramming() {

		
	std::cout << "I Love Programming!\n" << "\n";
	std::cout << "I promise to be the best developer ever!i\n" << "\n";
	std::cout << "I know it will take some time to practice, but I will achieve my goal.\n" << "\n";
	std::cout << "Best Regards.\n";
	std::cout << "NoName NoName." << std::endl;

}


void printH() {

	std::cout << "*   *\n";
	std::cout << "*   *\n";
	std::cout << "*****\n";
	std::cout << "*   *\n";
	std::cout << "*   *" << std::endl;
}

int main() {

	displayMyCardFunction();
	std::cout << "\n\n";
	printILoveProgramming();
	std::cout << "\n\n";
	printStars();
	std::cout << "\n\n";
	printH();

	return 0;
}
