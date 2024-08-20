#include <iostream>


double calculatePower(double base, int exponent){


	if (exponent == 0) {
        	return 1.0;
	}


	double result = 1.0;

	if (exponent < 0) {
		base = 1 / base;
		exponent = -exponent;
	}

	for (int counter = 0; counter < exponent; ++counter) {
        	result *= base;
	}
    
	return result;
}


int main() {
	double enterBase;
	int enterExponent;
	
 	std::cout << "Enter number base? \n";
	std::cin >> enterBase;
	std::cout << "Enter number exponent? \n";
	std::cin >> enterExponent;

	std::cout << enterBase << "^" << enterExponent << " = " << calculatePower(enterBase, enterExponent) << std::endl;

	return 0;
}
