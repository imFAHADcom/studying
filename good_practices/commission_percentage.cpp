/*
Write a program to ask the user to enter:
- TotalSales 

The commission is calculated os one percentage * the total sales amount, all you need is fo decide which percentoge to use of the following:

- > 1000000 - Percentage is 1%
- > 500K fo 1M - Percentage is 2%
- > 100K - 500K Percentage is 3%
- > 50K to 100K - Percentage is 5%
- Otherwise - Percentage is O% 

Example Inputs:
110,000

Outputs :
3,300 

*/


#include <iostream>

float readTotalSales()
{
	float totalSales;
	std::cout << "Enter a total sales, Please?" << std::endl;
	std::cin >> totalSales;

	return totalSales;
}

constexpr float getCommissionPercentage(const float& TOTAL_SALES)
{
	if(TOTAL_SALES >= 1000000)
		return 0.01;
	else if(TOTAL_SALES >= 500000)
		return 0.02;
	else if(TOTAL_SALES >= 100000)
		return 0.03;
	else if(TOTAL_SALES >= 50000)
		return 0.05;
	else
		return 0.00;
}

float calculateCommissionPercentage(const float& TOTAL_SALES)
{
	return getCommissionPercentage(TOTAL_SALES) * TOTAL_SALES;
}


int main()
{
	float getTotalSales = readTotalSales();

	std::cout << "Commission percentage is: " << getCommissionPercentage(getTotalSales) << std::endl;
	std::cout << "Total commission is: " << calculateCommissionPercentage(getTotalSales) << std::endl;

	return 0;
}
