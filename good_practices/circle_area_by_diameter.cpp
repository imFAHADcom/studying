#include <iostream>
#include <cmath>

float readDiameter()
{
	float diameter;
	std::cout << "Enter diameter, Please?" << std::endl;
	std::cin >> diameter;
	
	return diameter;
}

float calculateCircleAreaByDiameter(const float& DIAMETER)
{
	float area = M_PI * pow(DIAMETER,2) / 4;

	return area;
}

void printResult(const float& RESULT_CALAULATE)
{
	std::cout << "Circle area by diameter is: " << RESULT_CALAULATE << std::endl;
}

int main()
{
	printResult(calculateCircleAreaByDiameter(readDiameter()));
}
