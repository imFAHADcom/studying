#include <iostream>

struct UserInput{
	double number1; 
	double number2;
	char operationType;
};

UserInput readUserInput() {
	UserInput input;
	std::cout << "Enter first number? \n";
	std::cin >> input.number1;

	std::cout << "Enter second number? \n";	
	std::cin >> input.number2;

	std::cout << "Enter operation type (+, -, *, /) : \n";
	std::cin >> input.operationType;
	
	std::cout << "\n*************************************" << std::endl;

	return input;
}

void calculate(const UserInput& input){

	const char add = '+';
	const char subtract = '-';
	const char multiply = '*';
	const char devide = '/';


	switch (input.operationType) {
		case add:
			std::cout << "Result is: " << input.number1 + input.number2 << std::endl;
		break;

		case subtract:
			std::cout << "Result is: " << input.number1 - input.number2 << std::endl;
		break;

		case multiply :
			std::cout << "Result is: " << input.number1 * input.number2 << std::endl;
		break;

		case devide:
			if (input.number2 == 0){
				std::cout << "Divison by zero is undefined" << std::endl; 
			}
			else {
				std::cout << "Result is: " << input.number1 / input.number2 << std::endl;
			}
		break;
		
		default:
		 	std::cout << "Invalid operation type. Please use one of (+, -, *, /)." << std::endl;
	}
}


int main() {
	UserInput input = readUserInput();

	calculate(input);

	return 0;
}


