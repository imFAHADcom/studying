#include <iostream>


signed int readUserInput() {
	signed int number;
	std::cout << "Enter number?" << std::endl;
	std::cin >> number;

	return number;
}


signed int printNumbersEven(signed int number) {

	signed int sum = 0;

	for(signed short int i = 1; i <= number; i++){
		if(i % 2 == 0) {
			sum = sum + i;
		}
	}
	return sum;

}


int main() {

	std::cout << printNumbersEven(readUserInput()) << std::endl;





	return 0;
}
