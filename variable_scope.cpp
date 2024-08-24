#include <iostream>


int number = 100;

void procedural() {

	int number = 200;

	std::cout << "variable of procedural scope is: " << number << std::endl;
}


int main() {
	int number = 300;
	
	std::cout << "variable of global scope is: " << ::number << "\n";
	procedural();
	std::cout << "variable of local main scope is: " << number << "\n";

	return 0;
}
