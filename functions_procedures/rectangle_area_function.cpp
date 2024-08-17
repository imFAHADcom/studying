#include <iostream>

int rectangleArea(int rectangleWidth, int rectangleHeight){
	return rectangleWidth * rectangleHeight;
}


int main() {
	int width, height;
	std::cout << "Enter width for rectangle? \n";
	std::cin >> width;
	std::cout << "Enter height for rectangle? \n";
	std::cin >> height;

	std::cout << "Rectangle area is: " << rectangleArea(width,height) << std::endl;

	return 0;
}
