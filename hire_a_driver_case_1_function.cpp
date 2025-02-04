#include <iostream>

struct Info
{
	int age;
	bool hasDrivingLicense;
};

Info readInfo()
{
	 Info userInfo;

	std::cout << "Enter your age, Please? " << std::endl;
	std::cin >> userInfo.age;
	std::cout << "Do you have driver License? Enter (1) if Yes. Enter (0) if NO " << std::endl;
	std::cin >> userInfo.hasDrivingLicense;
	return userInfo;
}

bool isAccept(const Info& userInfo)
{
	return (userInfo.age >= 21 && userInfo.hasDrivingLicense);
}

void printIsAccept(const Info& userInfo)
{
	if(isAccept(userInfo))
	{
		std::cout << "Hired" << std::endl;
	}
	else
	{
		std::cout << "Recjected" << std::endl;
	}
}


int main()
{

	printIsAccept(readInfo());


	return 0;
}
