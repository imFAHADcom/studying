#include <iostream>


void readTotalSalesAmount(unsigned int& totalSalesAmount) {
	std::cout << "Enter the total sales amount? " << std::endl;
	std::cin >> totalSalesAmount;
}

void checkTotalSalesAmount(unsigned int totalSalesAmount) {
	unsigned int commissionPercentage;

	if (totalSalesAmount > 1000000) {
		commissionPercentage = totalSalesAmount * 0.01;
		std::cout << commissionPercentage << std::endl;
	}

	else if (totalSalesAmount > 500000) {
		commissionPercentage = totalSalesAmount * 0.02;
		std::cout << commissionPercentage << std::endl;
	}
	else if (totalSalesAmount > 100000) {
		commissionPercentage = totalSalesAmount * 0.03;
		std::cout << commissionPercentage << std::endl;
	}
	else if (totalSalesAmount > 50000) {
		commissionPercentage = totalSalesAmount * 0.05;
		std::cout << commissionPercentage << std::endl;
	}
	else {
		std::cout << "Zero" << std::endl;
	}
}

int main() {

	unsigned int userTotalSalesAmount;
	
	readTotalSalesAmount(userTotalSalesAmount);
	checkTotalSalesAmount(userTotalSalesAmount);


	return 0;
}
