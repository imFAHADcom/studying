#include <iostream>
#include <cmath>

void readUserInput(float& a, float& b)
{
	std::cout << "Enter Side of the triangle A, Please\n";
	std::cin >> a;
	std::cout << "Enter Base of the triangle B, Please?" << std::endl;
	std::cin >> b;
}

const float calculatecircleAreaInscribedInAnIsoscelesTriangle(const float& A, const float& B)
{
/*
	float AMinusB = A - B;
	float APlusB = A + B;
	float area0 = pow(B, 2) / 4;
	float area1 = M_PI * area0;
	float area2 =  (2 * AMinusB) / (2 * APlusB);
	float area = area1 * area2;
*/

//	float area = (M_PI * (pow(B, 2) / 4 )) * ((2 * (A - B)) / (2 * (A +B)));

	float area = M_PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

	return area;
}

void printResult(const float& RESULT_CALCULATE)
{
	std::cout << "Circle area inscribed in an isosceles triangle is: " << RESULT_CALCULATE << std::endl;
}

int main()
{
	float a, b;

	readUserInput(a, b);
	printResult(calculatecircleAreaInscribedInAnIsoscelesTriangle(a, b));
	return 0;
}
