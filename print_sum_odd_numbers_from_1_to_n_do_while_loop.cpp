#include <iostream>



signed int getUserNumber()
{
	signed int number;
	std::cout << "Enter number, Please?\n";\
	std::cin >> number;
	std::cout << "******************" << std::endl;

	return number;

}


void printSumOddNumbers(signed int number)
{

	signed int i = 1;
	signed int  sum  = 0;
	do
	{
		if (number %  2 == 1)
		{
			sum = sum + number;		
		}
		
		number--;
	} while(i <= number);

	std::cout << sum << std::endl;

}



int main()
{
	printSumOddNumbers(getUserNumber());

	return 0;
}
