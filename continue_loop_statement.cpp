#include <iostream>


int main()
{
/*	int sum = 0;	

	for(int i = 1; i <= 5; i++)
	{

		int number;
		std::cout << "Enter number" << std::endl;
		std::cin >> number;

		if(number > 50)
		{
			std::cout << "\nThe number is greater than 50 and won't be calculated.\n" << std::endl;
			continue;
		}
 		sum += number;

	
	}

	std::cout << "********************\n" << sum << std::endl;
*/



	int sum = 0, i = 0, number;
	do
	{
		i++;
		std::cout << "Enter number? " << std::endl;
		std::cin >> number;

		if(number > 50)
		{
			std::cout << "\nThe number is greater than 50 and won't be calculated.\n" << std::endl;
			continue;
		}
	
		sum += number;
	} while(i < 5);

	std::cout << "*******************************\n" << sum << std::endl;

	return 0;
}
