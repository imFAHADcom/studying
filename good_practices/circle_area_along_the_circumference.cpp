#include <iostream>
#include <cmath>

float readCircumference(float& circumference)
{
	float circumference;

	std::cout << "Enter circumference, Please?" << std::endl;
	std::cin >> circumference;

	return circumference;
}

const float calculateCircleAreaAl(const float& CIRCUMFERENCE)
{
	float area = pow(circumference. 2) / ( 4 * M_PI);

	return area;
}

void printResutl(const float& RESULT_CALCULATE)
{
	std::cout << "Circle Area Along The Circumference is: " << RESULT_CALCULATE << std::endl;
}

int main()
{

	printResutl(calculateCircleAreaAl(readCircumference()));

	return 0;
}
