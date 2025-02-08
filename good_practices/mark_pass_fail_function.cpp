#include <iostream>


enum MarkPassFail
{
	MARK_PASS = 1,
	MARK_FAIL = 2,
};

int readMark()
{
	int mark;

	std::cout << "Enter your mark? \n";
	std::cin >> mark;
	std::cout << "*******************************" << std::endl;

	return mark;
}

MarkPassFail checkMark(const int& USER_MARK)
{
	if(USER_MARK >= 50)
		return MarkPassFail::MARK_PASS;
	else
		return MarkPassFail::MARK_FAIL;
}

void printResult(const MarkPassFail& USER_MARK)
{
	if(MarkPassFail(USER_MARK) == MarkPassFail::MARK_PASS)
		std::cout << "You passed" << std::endl;
	
	else
		std::cout << "You failed" << std::endl;
}

int main()
{
	printResult(checkMark(readMark()));


	return 0;
}
