#include <iostream>



int main()
{

	int array[10] = {10,20,44,55,33,22,99,100};

	for(int i = 0; i <= 10; i++)
	{
		std::cout << "We are at iteration [" << i << "]" << std::endl;

		if(array[i] == 20)
		{
			std::cout << "\n" << 20 << " found at position [" << i << "]" << std::endl;
			break;
		}
	}


	return 0;
}
