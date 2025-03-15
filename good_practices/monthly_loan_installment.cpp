/*
Write a program to read a LoanAmount and ask you how many months you need to settle the loan, then calculate the monthly installment amount.

Input:
10
Outputs:
500


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

float monthlyinstallment(float loanAmount, float howManyMonths){

	return (float)loanAmount / howManyMonths;
}


int main(){
	float readLoanAmount = readNumberPositive("Enter loan amount, Please? ");
	float readHowManyMonths = readNumberPositive("Enter how many months, Please? ");

	std::cout << monthlyinstallment(readLoanAmount, readHowManyMonths) << std::endl;

	return 0;
}
