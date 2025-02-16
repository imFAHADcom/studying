#include <iostream>


void readTriangleArea(float& halfBase, float& height)
{
	std::cout << "Enter half base, Please\n";
	std::cin >> halfBase;
	std::cout << "Enter height, please" << std::endl;
	std::cin >> height;

}

const float calculateTriangleArea(const float& HALFBASE, const float HEIGHT)
{
	float area = 0.5 * (HALFBASE * HEIGHT);
	
	return area;
}

void printTriangleArea(const float& CALCULATE_RESULT)
{
	std::cout << "Triangle area is: " << CALCULATE_RESULT << std::endl;
}

int main()
{
	float halfBase, height;

	readTriangleArea(halfBase, height);
	printTriangleArea(calculateTriangleArea(halfBase, height));

	return 0;
}
