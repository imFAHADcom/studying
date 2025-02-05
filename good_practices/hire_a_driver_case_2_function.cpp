#include <iostream>

struct Info
{
	signed short int age;
	bool hasDriveringLicense;
	bool hasRecommendation;
};


Info readInfo()
{
	Info userInfo;
	std::cout << "Enter your Age, Please?\n";
	std::cin >> userInfo.age;
	std::cout << "Do you have Driver License? (Yes = 1 / No = 0):\n";
	std::cin >> userInfo.hasDriveringLicense;
	std::cout << "Do you have Recommendation? (Yes = 1 / No = 0):" << std::endl;
	std::cin >> userInfo.hasRecommendation;

	return userInfo;
}

bool isAccept(const Info& userInfo)
{
	return (userInfo.hasRecommendation) || (userInfo.age >= 21 && userInfo.hasDriveringLicense);

}

void printResult(const Info& userInfo)
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
	printResult(readInfo());

	return 0;

}
