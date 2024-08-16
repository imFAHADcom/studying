#include <iostream>
#include <string>


void mySomeProcedure() {
	int number1, number2;

	std::cout << "please Enter Number1? \n";
	std::cin >> number1;
	std::cout << "please Enter Number2? \n";
	std::cin >> number2;



	std::cout << "************************\n" << number1 + number2 << std::endl;
}

int mySomeFunction() {
	int number1, number2;

	std::cout << "please Enter Number1? \n";
	std::cin >> number1;
	std::cout << "please Enter Number2? \n";
	std::cin >> number2;



	std::cout << "************************\n";
	return number1 + number2;
}


int main() {

	mySomeProcedure();	

	std::cout << "\n\n\n";

	std::cout << mySomeFunction() << std::endl;


	return 0;
}
