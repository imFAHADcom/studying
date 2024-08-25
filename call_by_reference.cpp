#include <iostream>

void function(int& x) {

	x = 20;
	std::cout << "x variable value inside the function became= " << x << std::endl;
}



int main() {
	int a;
	a = 10;

	std::cout << "a variable before calling the function became= " << a << std::endl;

	function(a);

	std::cout << "After modifying the variable a by using the reference via the function= " << a << std::endl;

	std::cout << "a variable address memory: " << &a << std::endl;
	return 0;
}

