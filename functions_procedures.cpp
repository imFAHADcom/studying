#include <iostream>
#include <string>


void mySumProcedure() {
	int number1, number2;

	std::cout << "please Enter Number1? \n";
	std::cin >> number1;
	std::cout << "please Enter Number2? \n";
	std::cin >> number2;



	std::cout << "************************\n" << number1 + number2 << std::endl;
}



int mySumFunction() {
	int number1, number2;

	std::cout << "please Enter Number1? \n";
	std::cin >> number1;
	std::cout << "please Enter Number2? \n";
	std::cin >> number2;



	std::cout << "************************\n";
	return number1 + number2;
}


int main() {

	mySumProcedure();	

	std::cout << "\n\n\n";
	std::cout << mySumFunction() << std::endl;


	return 0;
}
