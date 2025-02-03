#include <iostream>



int main()
{
	int number;
	int sum = 0;
	int i = 1;

	do
	{
	std::cout << "Enter number, Please?\n";
	std::cin >> number;

	if(number != -99)
	{
		sum = sum + number;
	}

	} while(number != -99);

	std::cout << "******************************\n";
	std::cout << sum << std::endl;
	
	return 0;

}
