#include <iostream>


int getUserInput() {
	signed int number;
	std::cout << "Enter number? " << std::endl;
	std::cin >> number;

	return number;
}


void printNumbersOdd(signed int number){

	signed int sum = 0;
	for(signed int counter = 0; number >= counter; counter++) {
		if(counter % 2 != 0) {
		sum = sum + counter;	
		}

	}


	std::cout << sum << std::endl;
}



int main(){
	printNumbersOdd(getUserInput());


	return 0;
}
