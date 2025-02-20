/*
Write a program to ask the user to enter:
- Pennies, Nickels, Dimes, Quarters, Dollars
Then calculate the total pennies , total dollars and print them on screen
giving that:

- Pemny = 1
- Nickel = 5
- Dime = 10
- Quarter = 25
- Dollar = 100
Example Inputs:
5,5,5,5,5

Outputs:
705 Pennies
7,05 Dollars
*/


#include <iostream>


struct PiggyBankContenet {int number_of_pennies, number_of_nickels, number_of_dimes, number_of_quarters, number_of_dollars;};


PiggyBankContenet readPiggyBankContenet()
{
	PiggyBankContenet readStruct;

	std::cout << "Enter total pennies, Please?\n";
	std::cin >> readStruct.number_of_pennies;
	std::cout << "Enter total nickels, Please?\n";
	std::cin >> readStruct.number_of_nickels;
	std::cout << "Enter total dimes, Please?\n";
	std::cin >> readStruct.number_of_dimes;
	std::cout << "Enter total quarters, Please?\n";
	std::cin >> readStruct.number_of_quarters;
	std::cout << "Enter total dollars, Please?" << std::endl;
	std::cin >> readStruct.number_of_dollars;

	return readStruct;
}

int calculatePennies(const PiggyBankContenet& PIGGYBANKCONTENELT)
{
	int totalPennies = (PIGGYBANKCONTENELT.number_of_pennies * 1) + (PIGGYBANKCONTENELT.number_of_nickels * 5) + (PIGGYBANKCONTENELT.number_of_dimes * 10) + (PIGGYBANKCONTENELT.number_of_quarters * 25) + (PIGGYBANKCONTENELT.number_of_dollars * 100);

	return totalPennies;
}


int main()
{
	int totalPennies = calculatePennies(readPiggyBankContenet());

	std::cout << totalPennies << " Pennies" << std::endl;
	std::cout << (float) totalPennies / 100 << " Dollars" << std::endl;


	return 0;
}
