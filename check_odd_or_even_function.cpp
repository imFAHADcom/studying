#include <iostream>

enum NumberType{
	NUMBERTYPE_EVEN = 1,
	NUMBERTYPE_ODD = 2,

};

int readNumber()
{
	int number;
	std::cout << "Enter number, Please? " << std::endl;
	std::cin >> number;


	return number;
}

NumberType checkNumberType(int number)
{

/*	if(number % 2 == 0)
	{
		return NumberType::NUMBERTYPE_EVEN;
	}
	else
	{
		return NumberType::NUMBERTYPE_ODD;
	}
*/


	switch(number % 2)
	{
		case 0:
		return NumberType::NUMBERTYPE_EVEN;
	
		default:
		return NumberType::NUMBERTYPE_ODD;
	}

}


void printNumberType(NumberType numberType)
{
	switch(numberType)
	{
		case NumberType::NUMBERTYPE_EVEN:
			std::cout << "Number is Even" << std::endl;
			break;

		default:
		std::cout << "Number is ODD" << std::endl;
	}



}



int main()
{

	printNumberType(checkNumberType(readNumber()));

	return 0;
}
