#include <iostream>

void function(int x) {

	x = 20;
	std::cout << "Number inside function became= " << x << std::endl;
}



int main() {
	int a;
	a = 10;

	std::cout << "Number before calling the function became= " << a << std::endl;

	function(a);

	std::cout << "Number after calling the function became= " << a << std::endl;
	
	return 0;
}
