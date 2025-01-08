#include <iostream>

int getUserInput() {
	int n;
	std::cout << "Enter number? " << std::endl;
	std::cin >> n;

	return n;

}


void printNumbersUpTo(int n) {
	for(int i = 1; i <= n; i++) {
		std::cout << i << std::endl; 

	}
	
}


int main() {

	printNumbersUpTo(getUserInput());


	return 0;
}
