/*
Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the balance to user, otherwise print “Wong PIN” and ask the user to enter the PIN again. 
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
	do{

		std::cout << "Enter PIN code, Please?" << std::endl;
		std::cin >> PINCode;

	} while(PINCode != "1234");


	return PINCode;
}

bool login(){

	std::string PINCode = readPINCode();

	if(PINCode == "1234"){
		return true;
	}
	else{
		std::cout << "Wrong PIN" << std::endl;
	}

	return false;
}


int main(){
	
	if(login()){
		std::cout << "\nTotal Balance: " << 7500 << std::endl;
	}

	return 0;
}
