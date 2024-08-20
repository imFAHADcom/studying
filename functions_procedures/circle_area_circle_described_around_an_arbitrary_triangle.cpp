#include <iostream>
#include <cmath>

double calculateCircumscribedCircleAreaForArbitraryTriangle(double sideA, double sideB, double sideC) {

	double p = (sideA + sideB + sideC) / 2;
	const long double PI = 3.141592653589793238L;
	double getSqrt = sqrt(p * (p - sideA) * (p - sideB) * (p - sideC)); 
	double calculate = (sideA * sideB * sideC) / (4 * getSqrt);


	return PI * pow(calculate, 2);
}

int main() {
	double enterSideA, enterSideB, enterSideC;

	std::cout << "Enter side A of Triangle? \n";
	std::cin >> enterSideA ;
	std::cout << "Enter side B of Triangle? \n";
	std::cin >> enterSideB;
	std::cout << "Enter side C of Triangle? \n";
	std::cin >> enterSideC ;

	std::cout << "Circle area is: " << calculateCircumscribedCircleAreaForArbitraryTriangle(enterSideA, enterSideB, enterSideC) << std::endl;


	return 0;
}
