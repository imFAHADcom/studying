#include <iostream>


int main(){

	for(int i = 1; i <= 10; ++i)
	{
		std::cout << "\n**************************************\n";
		std::cout << "Table " << i  << "\n" << std::endl;


		for(int m = 1; m <= 10; ++m)
		{
			std::cout << i << " * " << m << " = " << i * m << std::endl;
				
		}
		
	}


	return 0;
}

