#include <iostream>

int main(){

	for(int i = 10; i >= 1; --i) 
	{
		for(int number = 1; number <= i; ++number)
		{
			std::cout << number;
		}
		std::cout << std::endl;
	}


	return 0;
}
