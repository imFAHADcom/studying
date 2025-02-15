#include <iostream>

void readRectangleArea(float& length, float& width)
{
	std::cout << "Enter length, please?\n";
	std::cin >> length;
	std::cout << "Enter width, please?" << std::endl;
	std::cin >> width;

}

float calculateRactangleArea(const float& length, const float& width)
{
	return length * width;
}

void prfloatRectangleArea(const float& AREA)
{
	std::cout << "Rectangle Area is: " << AREA << std::endl;
}


int main()
{
	float length, width;
	readRectangleArea(length, width);
	prfloatRectangleArea(calculateRactangleArea(length, width));

	return 0;
}
