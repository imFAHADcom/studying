#include <iostream>

int readNumber()
{
	int number;

	std::cout << "Enter a number, Please?" << std::endl;
	std::cin >> number;

	return number;
}

void powerOf234(const int& NUMBER)
{
	unsigned short int powerOf2, powerOf3, powerOf4;
	
	powerOf2 = NUMBER * NUMBER;
	powerOf3 = NUMBER * NUMBER * NUMBER;
	powerOf4 = NUMBER * NUMBER * NUMBER * NUMBER;

	std::cout << NUMBER << " Power of 2 is: " << powerOf2 << "\n" << NUMBER << " Power of 3 is; " << powerOf3 << "\n" << NUMBER << "Power of 4 is; " << powerOf4 << std::endl;

}


int main()
{
	powerOf234(readNumber());

	return 0;
}
