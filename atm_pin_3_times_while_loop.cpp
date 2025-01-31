#include <iostream>




int main()
{
	const signed short int pass = 1234;
	const signed short int maxAttempts = 3;
	signed short int amount = 7500;
	signed short int pin; 
	signed short int attempts = 0;

	while (attempts < maxAttempts) 
	{
	std::cout << "Enter PIN? (" << attempts + 1 << ")" << std::endl;
	std::cin >> pin;
	
	if (pin == pass) 
	{
		std::cout << "Your balance is: " << amount << std::endl;
		return 0;
	}
	
	attempts++;
	}


	std::cout << "Card is locked!!" << std::endl;
 
	return 0;
}
