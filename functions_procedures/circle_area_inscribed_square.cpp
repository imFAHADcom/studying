#include <iostream>
#include <cmath>

double inscribedSquare(double sideOfSquare) {
	const long double PI = 3.141592653589793238L;

	return (PI * pow(sideOfSquare, 2)) / 4  ;
}

int main() {
	double enterSideOfSquare;
	
	std::cout << "Enter a side of a square? \n";
	std::cin >> enterSideOfSquare;

	std::cout << "Circle area is: " << inscribedSquare(enterSideOfSquare) << std::endl;


	return 0;
}
