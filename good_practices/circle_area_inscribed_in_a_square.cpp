#include <iostream>
#include <cmath>

float readSquareSide()
{
	float a;
	std::cout << "Enter square side A, Please?" << std::endl;
	std::cin >> a;

	return a;
}

float calculateCircleAreaInscribedInASquare(const float& A)
{
	float area = (M_PI * pow(A, 2)) / 4;

	return area;

}

void printResult(const float& A)
{

	std::cout << "Circle area inscribed in a square is: " << A << std::endl;
}


int main()
{
	printResult(calculateCircleAreaInscribedInASquare(readSquareSide()));

}
