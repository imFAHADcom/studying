#include <iostream>

int main(){

	for(int i = 10; i >= 1; --i)
	{
		for(int star = 1; star <= i; ++star)
		{
			std::cout << "*";
			
		}
		std::cout << std::endl;
	}


	return 0;
}
