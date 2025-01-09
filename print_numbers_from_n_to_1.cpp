#include <iostream>

int getUserInput() {
	signed short int n;
	std::cout << "Enter number? " << std::endl;
	std::cin >> n;

	return n;
}

void printNumbersDownTo(signed short int n) {

	for(signed short int i = 1; i <= n; n--) {
		std::cout << n << std::endl;
	}

}



int main() {

	printNumbersDownTo(getUserInput());



	return 0;
}
