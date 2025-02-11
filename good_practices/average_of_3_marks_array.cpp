#include <iostream>

void readMarks(int (&array)[3])
{
	std::cout << "Enter Mark 1, Please?\n";
	std::cin >> array[0];
	std::cout << "Enter Mark 2, Please?\n";
	std::cin >> array[1];
	std::cout << "Enter Mark 3, Please?" << std::endl;
	std::cin >> array[2];
}

int sumOf3Marks(const int (&ARRAY_MARKS)[3])
{
	return ARRAY_MARKS[0] + ARRAY_MARKS[1] + ARRAY_MARKS[2];
}

float calculateAverage(const int (&AVERAGE_MARKS)[3])
{
	return float (sumOf3Marks(AVERAGE_MARKS)) / 3;
}

void printResult(const float& AVERAGE_MARKS)
{
	std::cout << "***************************\n" << "Average marks is: " << AVERAGE_MARKS << std::endl;
}

int main()
{
	int array[3];

	readMarks(array);
	printResult(calculateAverage(array));

	return 0;
}
