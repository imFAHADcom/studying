#include <iostream>

void readNumbers(int& marks1, int& marks2, int& marks3)
{
	std::cout << "Enter marks 1, Please?\n";
	std::cin >> marks1;
	std::cout << "Enter marks 2, Please?\n";
	std::cin >> marks2;
	std::cout << "Enter marks 3, Please?" << std::endl;
	std::cin >> marks3;
}

int sumOf3Numbers(const int& MARK1, const int& MARK2, const int& MARK3)
{
	return MARK1 + MARK2 + MARK3;
}

float calculateAverage(const int& MARK1, const int& MARK2, const int& MARK3)
{
	return float (sumOf3Numbers(MARK1, MARK2, MARK3)) / 3;
}

void printResult(const float& CALCULATE_AVERAGE)
{
	std::cout << "************************\n" << "Average Marks is: " << CALCULATE_AVERAGE << std::endl;
}

int main()
{
	int marks1, marks2, marks3;
	readNumbers(marks1, marks2, marks3);
	printResult(calculateAverage(marks1, marks2, marks3));

	return 0;
}
