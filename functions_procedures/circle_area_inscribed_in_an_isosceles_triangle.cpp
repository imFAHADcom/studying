#include <iostream>
#include <cmath>

double isoscelesTriangle(double sideOfTriangle , double base) {

	const long double PI = 3.141592653589793238L;

	return (PI * pow(base, 2) / 4) * ((2 * sideOfTriangle - base) / (2 * sideOfTriangle + base));
}


int main() {

	double enterSideOfTriangle, enterBase;

	std::cout << "Enter side of triangle? \n";
	std::cin >> enterSideOfTriangle;
	std::cout << "Enter base of triangle? \n";
	std::cin >> enterBase;

	std::cout << "Circle area is: " << isoscelesTriangle(enterSideOfTriangle, enterBase) << std::endl;
	
	return 0;
}
