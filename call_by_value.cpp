#include <iostream>

void function(int x) {

	x = 20;
	std::cout << "variable value inside the function became= " << x << std::endl;
}



int main() {
	int a;
	a = 10;

	std::cout << "a variable before calling the function became= " << a << std::endl;

	function(a);

	std::cout << "a variable after calling the function became= " << a << std::endl;
	
	return 0;
}
