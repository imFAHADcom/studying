#include <iostream>
#include <cmath>


double circumference(double length){

	const long double PI = 3.141592653589793238L;

	return pow(length, 2) / (4 * PI) ;
}


int main() {
	
	double enterLength;

	std::cout << "Enter along the circumference, please? \n";
	std::cin >> enterLength;

	std::cout << "Circle area is: " << circumference(enterLength) << std::endl;

	return 0;
}
