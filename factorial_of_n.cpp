#include <iostream>


signed int readUserInput() {
	signed int number;

	while(true){	
	std::cout << "Enter postive number? " << std::endl;
	std::cin >> number;
		if(number >= 0) {
			return number;
		}
		else{
			std::cout << "Invalid input. Please enter a positive number" << std::endl;
		}
		
	}

}


signed int printFactorialOfNumber(signed int number) {

	signed int factorial = 1;
	for(signed int i = 1 ; number >= i; --number){
		factorial = factorial * number;
	}

	return factorial;	
}




int main() {

 	std::cout << printFactorialOfNumber(readUserInput()) << std::endl;


	return 0;
}
