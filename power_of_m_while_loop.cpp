#include <iostream>

void getUserNumber(signed int& number, signed int& power)

{
	while(true)
	{
		std::cout<< "Enter the positive number, please? \n";
		std::cin >> number;
		std::cout << "Enter the positive power of number, please? \n";
		std::cin >> power;
		std::cout << "**************************************" << std::endl;

		if(number >= 0 && power >= 0) 
		{
			break;
		}
		else 
		{
			std::cout << "invalid input. Please enter a positive number \n";
		}
	}

}




void printPowerOfNumber(signed int& number, signed int& power)
{

	signed int result = 1;
	if(power == 0) 
	{
		result = 1;
	}	
	else {
		
		signed int counter = 1;
		while(power >= counter)
		{
			result *= number;
			counter++;	
		}
	}

	std::cout << "Number " << number << " Power " << power << " = " << result << std::endl;
}


int main()
{
	signed int number, power;

	getUserNumber(number, power);
	printPowerOfNumber(number, power);


	return 0;
}
