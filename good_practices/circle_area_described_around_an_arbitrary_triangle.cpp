#include <iostream>
#include <cmath>

void readUserInput(float& a, float& b, float& c)
{
	std::cout << "Enter side of triangle A, Please?\n";
	std::cin >> a;
	std::cout << "Enter side of triangle B, Please?\n";
	std::cin >> b;
	std::cout << "Enter side of triangle A, Please?" << std::endl;
	std::cin >> c;

}



const float calculateArbitraryTriangle(const float& A, const float& B, const float& C)
{
	float p = (A + B + C) / 2;
	float area = M_PI * pow(((A * B * C) / (4 * sqrt(p * (p - A) * (p - B) * (p - C)))), 2);

	return area;
}

void printResult(const float REASULT_CALCULATE)
{
	std::cout << "Circle Area Described Around An Arbitrary Triangle is: " << REASULT_CALCULATE << std::endl;
}


int main()
{
	float a, b, c;

	readUserInput(a, b, c);
	printResult(calculateArbitraryTriangle(a, b, c));

	return 0;
}

