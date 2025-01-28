#include <iostream>


int main() {

	std::cout << "\nFor loop\n";
	for(int i = 1; i <= 5; i++) 
	{
		std::cout << i << std::endl;
	}

	std::cout << "\nWhile loop\n";
	int n = 1;
	while(n <= 5) 
	{
		std::cout << n << std::endl;
		n++;
	}


	return 0;
}
