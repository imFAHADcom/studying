#include <iostream>
#include <cmath>


double circleArea(double radius) {
	const long double PI = 3.141592653589793238L;

	return PI * pow(radius,2) ;
}

int main() {

	double enterRadius;

	std::cout << "Enter the radius of circle? \n";
	std::cin >> enterRadius;

	std::cout << "Circle area is: " << circleArea(enterRadius) << std::endl;	

	return 0;
}
