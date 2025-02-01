#include <iostream>


signed int getUserNumber()
{
	signed int number;
	std::cout << "Enter number, Please?\n";
	std::cin >> number;
	std::cout << "***************************" << std::endl;


	return number;
}


void printSumEvenNumber(signed int number)
{
	signed int  i = 1;
	signed int sum = 0;

	do
	{
		if(number % 2 == 0)
		{
			sum = sum + number;
		}
		number--;
	} while(i <= number);

	std::cout << sum << std::endl;

}

int main()
{
	printSumEvenNumber(getUserNumber());

	return 0;

}
