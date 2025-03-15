/*
Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the balance to user, otherwise print “Wong PIN” and ask the user to enter the PIN again 3 times. 
Assume User Balance is 7500.

Input:
1234

5151

Outputs:
Your balance is: 7500

Wrong PIN
*/

#include <iostream>
#include <string>

std::string readPINCode(){

	std::string PINCode = "";
	std::cout << "Enter PIN code, Please?" << std::endl;
	std::cin >> PINCode;


	return PINCode;
}

bool login(){
	
	int counter = 3;
	std::string PINCode = "";
	do{
	counter --;
	std::string PINCode =readPINCode();

	if(PINCode == "1234"){
		return true;
	}
	else{
		std::cout << "Wrong PIN, You have " << counter << " more tries."<< std::endl;
	}
	} while(counter >=1 && PINCode != "1234");

	return false;
}


int main(){
	
	if(login()){
		std::cout << "\nYour account balance is: " << 7500 << std::endl;
	}
	else {

		std::cout << "\nYour card blocked call the bank for the help." << std::endl;
	}
	return 0;
}

