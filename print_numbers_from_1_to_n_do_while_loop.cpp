#include <iostream>



signed int getUserNumber()
{
	signed int number;

	std::cout << "Enter number, Please?\n";
	std::cin >> number;
	std::cout << "**********************" << std::endl;


	return number;
}


void printNumber(signed int number)
{

	signed int i = 1;

	do
	{
		i++;
		std::cout << i << std::endl;
	} while (i <= number);

}



int main()
{

	printNumber(getUserNumber());



	return 0;
}
