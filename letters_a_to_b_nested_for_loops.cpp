#include <iostream>

int main(){

	for(char i = 65; i <= 90; ++i) 
	{
		for(char letter = 65; letter <= i; ++letter)
		{
			std::cout << letter;
		}
		std::cout << std::endl;
	}


	return 0;
}
