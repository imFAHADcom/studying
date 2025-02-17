#include <iostream>
#include <cmath>

float readRadius()
{

	float radius;
	std::cout << "Enter radius, Please?" << std::endl;
	std::cin >> radius;

	return radius;
}

const float calculateCircleArea(const float& RADIUS)
{
	const float PI = 3.141592653589793;
	float area = PI * pow(RADIUS, 2);
	return area;
}

void prinRadius(const float& RADIUS)
{
	std::cout << "Circle Area is: " << RADIUS << std::endl;
}

int main()
{
	//float radius;

	prinRadius(calculateCircleArea(readRadius()));

	return 0;
}
