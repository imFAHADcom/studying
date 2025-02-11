#include <iostream>

void readMarks(int& marks1, int& marks2, int& marks3)
{
	std::cout << "Enter mark 1, Please?\n";
	std::cin >> marks1;
	std::cout << "Enter mark 2, Please?\n";
	std::cin >> marks2;
	std::cout << "Enter mark 3, Please?" << std::endl;
	std::cin >> marks3;
}

int sumOf3Marks(const int& MARK1, const int& MARK2, const int& MARK3)
{
	return MARK1 + MARK2 + MARK3;
}

float calculateAverage(const int& MARK1, const int& MARK2, const int& MARK3)
{
	return float (sumOf3Marks(MARK1, MARK2, MARK3)) / 3;
}

void printResult(const float& CALCULATE_AVERAGE)
{
	std::cout << "************************\n" << "Average Marks is: " << CALCULATE_AVERAGE << std::endl;
}

int main()
{
	int marks1, marks2, marks3;
	readMarks(marks1, marks2, marks3);
	printResult(calculateAverage(marks1, marks2, marks3));

	return 0;
}
