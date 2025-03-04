/*
Write a program to read a TotalBill and CashPaid and calculate the remainder to be paid back.

Inputs:
20
50

Outputs:
30
*/


#include <iostream>
#include <string>

float readPositiveNumber(std::string message){
	float number = 0;
	do {
		std::cout << message << std::endl;
		std::cin >> number;
	} while(number < 0);

	return number;
}

float calculateRemainder(float totalBill, float totalCashPaid){ 
	return totalCashPaid - totalBill;
}

int main(){
	float totalBill = readPositiveNumber("Enter Total Bill, Please?");
	float totalCashPaid = readPositiveNumber("Enter Total Cash Paid, Please?");

	std::cout << "\nTotal Bill = " << totalBill << "\n";
	std::cout << "Total Cash Paid = " << totalCashPaid << "\n";
	std::cout << "**********************\n";
	std::cout << "Remaider =  " << calculateRemainder(totalBill, totalCashPaid) << std::endl;

	return 0;
}
