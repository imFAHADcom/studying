#include <iostream>

void myFunction(int number1) {

	number1 = 7000;

	std::cout << "Number inside function became= " << number1 << std::endl;

}

int main() {

	int number1;
	number1 = 1000;
	

	myFunction(number1);	

	std::cout << "Number after calling the function became= " << number1 << std::endl;

	return 0;
}
