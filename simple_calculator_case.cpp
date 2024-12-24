#include <iostream>

void readUserInput(double& number1, double& number2, char& operationType) {

	std::cout << "Enter first number? \n";
	std::cin >> number1;

	std::cout << "Enter scond number? \n";	
	std::cin >> number2;

	std::cout << "Enter operation type (+, -, *, /) : \n";
	std::cin >> operationType;
	
	std::cout << "\n*************************************" << std::endl;
}

void calculate(double number1, double number2, char operationType){
	const char add = '+';
	const char subtract = '-';
	const char multiply = '*';
	const char devide = '/';


	switch (operationType) {
		case add:
			std::cout << "Result is: " << number1 + number2 << std::endl;
		break;

		case subtract:
			std::cout << "Result is: " << number1 - number2 << std::endl;
		break;

		case multiply :
			std::cout << "Result is: " << number1 * number2 << std::endl;
		break;

		case devide:
			if (number2 == 0){
				std::cout << "Divison by zero is undefined" << std::endl; 
			}
			else {
				std::cout << "Result is: " << number1 / number2 << std::endl;
			}
		break;
		
		default:
		 	std::cout << "Invalid operation type. Please use one of (+, -, *, /)." << std::endl;
	}
}


int main() {
	double userNum1, userNum2;
	char userOperationType;


	readUserInput(userNum1,userNum2,userOperationType);
	calculate(userNum1,userNum2,userOperationType);



	return 0;
}
