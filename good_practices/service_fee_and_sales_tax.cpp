/*

A restaurant charges 10% services fee and 16% sales tax.
Write a program to read a BillValue and add service fee and sales tax to it, and print the TotalBill on the screen.

Inputs:
100

Outputs:
127.6

*/

#include <iostream>
#include <string>

float readPositiveNumber(std::string message){
	float number = 0;

	do {
		std::cout << message << std::endl;
		std::cin >> number;
	} while(number <= 0);

	return number;
}

float totalBillAfterServiceAndTax(float totalBill){

	totalBill = totalBill * 1.1;
	totalBill = totalBill * 1.16;
	return totalBill;
}

int main(){
	float totalBill = readPositiveNumber("Enter Total Bill, Please?");

	std::cout << "\nTotal Bill = " << totalBill << "\n";
	std::cout << "Total Bill After Service Fee and Sales Tax = " << totalBillAfterServiceAndTax(totalBill) << std::endl;

	return 0;
}
