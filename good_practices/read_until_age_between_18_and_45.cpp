#include <iostream>

unsigned short int readAge()
{
	unsigned short int age;
	std::cout << "Enter your age, between (18 - 45), Please?" << std::endl;
	std::cin >> age;

	return age;

}

bool validateNumberInRange(unsigned short int number, unsigned short int from, unsigned short int to)

{
	return (number >= from && number <= to);
}


unsigned short int ageLoop(const unsigned short int& from, const unsigned short int& to)
{
	unsigned short int age = 0;
		do
		{
			age = readAge();

		} while(!validateNumberInRange(age, from, to));
	
	return age;
}

void printAge(const unsigned short int& AGE)
{
	std::cout << "Age is: " << AGE << std::endl; 
}



int main()
{
	printAge(ageLoop(18, 45));


	return 0;
}
