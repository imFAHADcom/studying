#include <iostream>



int readUser() {
	int number;
	std::cout << "Enter number ?\n";
	std::cin >> number;
	std::cout << "*****************" << std::endl;
	return number;
}

void numberLoop(const int& number){

	int counter = 1;
	while(number >= counter)
	{
		std::cout << counter << std::endl;
		counter++;
	}

}

int main() {
	int var = readUser();	
	numberLoop(var);

	return 0;
}
