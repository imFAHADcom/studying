#include <iostream>
#include <cmath>

void readRectangleArea(float& sideArea, float& diagonal)
{
	std::cout << "Enter side area, Please?" << std::endl;
	std::cin >> sideArea;

	std::cout << "Enter diagonal, Please?\n";
	std::cin >> diagonal;
}

float calculateRectangleAreByDiagonalAndSide(const float& SIDEAREA, const float& DIAGONAL)
{
	float area = SIDEAREA * sqrt(pow(DIAGONAL, 2) - pow(SIDEAREA, 2));

	return area;
}

void printRectangleArea(const float& CALCULATE_RESULT)
{
	std::cout << "Rectangle Area is: " << CALCULATE_RESULT << std::endl;
}

int main()
{
	float diagonal, sideArea;

	readRectangleArea(diagonal, sideArea);
	printRectangleArea(calculateRectangleAreByDiagonalAndSide(diagonal, sideArea));

	return 0;

}
