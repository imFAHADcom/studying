/*
Write a program to read a LoanAmount and Monthly Payment and calculate how many months you need to settle the loan.

Input:
5000
500
 
Outputs:
10 Months
*/

#include <iostream>
#include <string>


float readNumberPositive(std::string message){

	float number = 0;

	do{
		std::cout << message << std::endl;
		std::cin >> number;
	} while(number <= 0);

	return number;
}

float totalMonths(float loanAmount, float monthlyPayment){


	return (float)loanAmount / monthlyPayment;
}




int main(){
	float readLoanAmount = readNumberPositive("Enter loan amount, Please?");
	float readMonthlyPayment = readNumberPositive("Enter monthly installment?");

	std::cout << "\nTotal months to pay = " << totalMonths(readLoanAmount, readMonthlyPayment) << std::endl;

	return 0;
}
