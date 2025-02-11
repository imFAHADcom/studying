#include <iostream>

enum PassFail { PASS = 1, FAIL = 2 };

void readMarks(int& mark1, int& mark2, int& mark3)
{
	std::cout << "Enter mark 1, Please\n";
	std::cin >> mark1;
	std::cout << "Enter mark 2, Please\n";
	std::cin >> mark2;
	std::cout << "Enter mark 3, Please" << std::endl;
	std::cin >> mark3;
}

int sumOf3Marks(const int& MARK_1, const int& MARK_2, const int& MARK_3)
{
	return MARK_1 + MARK_2 + MARK_3;
}

float calculateAverage(const int& MARK_1, const int& MARK_2, const int& MARK_3)
{
	return float (sumOf3Marks(MARK_1, MARK_2, MARK_3)) / 3;
}

PassFail checkAverage(const float& TOTAL_SUM)
{
	if(TOTAL_SUM >= 50)
		return PassFail::PASS;
	else 
		return PassFail::FAIL;

}

void printResult(const float& PASS_FAIL)
{
	std::cout << "Your average is: " << PASS_FAIL << std::endl;

	if(checkAverage(PASS_FAIL) == PassFail::PASS)
		std::cout << "You Passed" << std::endl;
	else
		std::cout << "You Failed" << std::endl;
}


int main()
{
	int mark1, mark2, mark3;
	readMarks(mark1, mark2, mark3);
	printResult(calculateAverage(mark1, mark2, mark3));
	
	return 0;
}
