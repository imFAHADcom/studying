#include <iostream>
#include <string>

int main(){

	std::string space = "          ";
	for(int i = 1; i <= 20; i = 2 + i)
	{

			space.pop_back();
			std::cout << space;

		for(int m = 1; m <= i; ++m)
		{
			std::cout << "*";
				
		}
	
	std::cout << std::endl;
	}


	return 0;
}

