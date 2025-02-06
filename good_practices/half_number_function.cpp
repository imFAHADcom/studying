#include <iostream>

int readNumber()
{
	int number;
	std::cout << "Enter number, Please? " << std::endl;
	std::cin >> number;

	return number;
}

/*
تم اعداد المتغير number 
كاعدد صحيح int
لان لا يمكن كتابتها float
عند الارجاع 
ولكن يمكن تحويلها
لذلك اضطرينا لكتبه هكذا return float (number) 
*/

float calculateHalfNumber(const int& number)
{
	return float (number) / 2; 
}

void printHalfNumber(const int& number)
{

	std::string result = "half number of " + std::to_string (number) + " is: " + std::to_string (calculateHalfNumber(number));

	std::cout << result << std::endl;

}


int main()
{
	printHalfNumber(readNumber());

	return 0;
}
