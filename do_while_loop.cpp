#include <iostream>


void readInputNumber(int& from, int& to)
	{
		std::cout << "What do you want start number range from ?" << std::endl;
		std::cin >> from;

		std::cout << "What do you want the end number range to be ?" << std::endl;
		std::cin >> to;
		
		std::cout << "***************************************" << std::endl;
		std::cout << "***************************************" << std::endl;

	}

int readIntNumberInRange(int& from, int& to) {

	int number;
	do {
	std::cout << "Enter a number between " << from  << " to "<< to << std::endl;
	std::cin >> number;
	} 
	while(number < from || number > to); 

	std::cout << "\nThe number is: " << number << std::endl;

	return number;
}


int main() {
	int from, to;
	
	readInputNumber(from, to);
	readIntNumberInRange(from, to);



	return 0;
}

