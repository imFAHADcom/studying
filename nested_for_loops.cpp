#include <iostream>

int main(){

	for(int i = 1; i <= 10; ++i)
	{
		for(int number = i; number <= 10; ++number)
		{
			std::cout << number;
		}
		std::cout << std::endl;
	}

	return 0;
}
