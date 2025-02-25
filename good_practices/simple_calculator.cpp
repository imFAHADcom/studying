/*

Write a program to ask the user to enter:
- Numberl
- Number 2
- OperationType

Then perform the calculation according to the Operation Type as follows:

 '+': add the two numbers.

 '-': Subtract the two numbers.

 '*' : Multiply the two numbers.

 '/': Divide the two numbers.

Example Inputs:
10
20

Outputs:
200

*/


#include <iostream>

enum enOperationType{ADD = '+', SUBTRACT = '-', MULTIPLY = '*', DIVIDE = '/'};


float readNumber(std::string message)
{
	float number = 0;
	std::cout << message << std::endl;
	std::cin >> number;

	return number; 
}

enOperationType readOperationType()
{
	char charOperationType = '+';
	std::cout << "Enter operation type (+, -, *, /), Please?" << std::endl;
	std::cin >> charOperationType;

	return (enOperationType) charOperationType;
}

float calculate(float number1, float number2, enOperationType funReadOperationType)
{
	switch(funReadOperationType){
		case enOperationType::ADD:
			return number1 + number2;	
		case enOperationType::SUBTRACT:
			return number1 - number2;
		case enOperationType::MULTIPLY:
			return number1 * number2;
		case enOperationType::DIVIDE:
			if(number2 != 0)
				return number1 / number2;
			else
				std::cout << "Division by zero is undefined" << std::endl;
				return 0;
		default:
			return number1 + number2;
	}

}


int main()
{
	float number1 = readNumber("Enter the first number, Please?");
	float number2 = readNumber("Enter the second number, Please?");
	enOperationType opType = readOperationType();

	std::cout << "Result is: " << calculate(number1, number2, opType) << std::endl;
	
	return 0;
}
