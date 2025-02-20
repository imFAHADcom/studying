/*

Write a program to ask the user to enter:
- Grade

Then print grade ad folllows:
. 90 - 100 print A.
. 80 - 89 print B.
. 70 - 79 print C.
. 60 - 69 print D.
. 50 - 59 print E.
. Otherwise print F.

Example Inputs:
95
Outputs:
A
*/

#include <iostream>


constexpr unsigned short int MIN_GRANDE = 0;
constexpr unsigned short int MAX_GRANDE = 100;

unsigned short int readNumberInRage(const unsigned short int& FROM, const unsigned short int& TO)
{
	unsigned short int grade;
	do
	{
		std::cout << "Enter a grade, Please?" << std::endl;
		std::cin >> grade;

	} while(grade < FROM || grade > TO);

	return grade;
}

constexpr char getGradeLetter(const unsigned short int& GRADE)
{
	if(GRADE >= 90)
		return 'A';
	else if(GRADE >= 80)
 		return 'B';
	else if(GRADE >= 70)
 		return 'C';
	else if(GRADE >= 60)
 		return 'D';
	else if(GRADE >= 50)
 		return 'E';
	else
		return 'F';
} 

int main()
{
	const unsigned short int grade = readNumberInRage(MIN_GRANDE, MAX_GRANDE);
	const char result = getGradeLetter(grade);

	std::cout << "Result is: " << result << std::endl;


	return 0;
}

