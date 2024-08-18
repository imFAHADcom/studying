#include <iostream>
#include <cmath>


double rectangleAreaThroughDiagonalAndSideArea(double height, double diagonal) {



	return height * (sqrt(pow(diagonal,2) - pow(height,2)));

}


int main() {
	double enterHeight, enterDiagonal;

	std::cout << "Enter Rectangle height? \n";
	std::cin >> enterHeight;
	std::cout << "Enter Rectangle diagonal? \n";
	std::cin >> enterDiagonal;

	std::cout << "Area is: " << rectangleAreaThroughDiagonalAndSideArea(enterHeight, enterDiagonal) << std::endl;

	

	return 0;
}
