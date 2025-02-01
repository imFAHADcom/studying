#include <iostream>

void getUser(signed int& base, signed int& exponent)
{
	std::cout << "Enter numaber base. Please?\n";
	std::cin >> base;
	std::cout << "Enter power of number, Please?\n";
	std::cin >> exponent;


}

void printPowerOfNumber(signed int& base, signed int& exponent)
{
	signed int i = 1;
	signed int result = 1;

	do
	{
		result = result * base;
		i++;
	} while (i <= exponent);

	std::cout << result << std::endl;
}


int main()
{
	signed int userBase, userExponent;
	getUser(userBase, userExponent);
	printPowerOfNumber(userBase, userExponent);

	return 0;

}
