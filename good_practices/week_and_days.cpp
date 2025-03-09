/*
Write a program to read a NumberOfHours and calculates the number of weeks, and days included in that number.


Inputs:
365


Outputs:
365 Hours
15.20 Days
2.17 Weeks
*/

#include <iostream>
#include <string>


float readPositiveNumber(std::string message){
	
	float number;
	do{
	std::cout << message << std::endl;
	std::cin >> number;
	} while(number <= 0);

	return number;
}

constexpr float hoursToDays(const float& NUMBER_OF_HOURS){
	

	return (float)NUMBER_OF_HOURS / 24;
}

constexpr float hoursToWeeks(const float& NUMBER_OF_HOURS){

	return (float)NUMBER_OF_HOURS / 24 / 7;
}

constexpr float daysToWeeks(const float& HOURSE_OF_DAYS){

	return (float)HOURSE_OF_DAYS / 7;

}


int main(){
	float numberOfHours = readPositiveNumber("Enter Number Of Hours, Please? ");
	float numberOfDays = hoursToDays(numberOfHours);
	float numberOfweeks = daysToWeeks(numberOfDays);

	std::cout << "Total Hours = " << numberOfHours << std::endl;
	std::cout << "Total Days = " << numberOfDays << std::endl;
	std::cout << "Total Weeks = " << hoursToWeeks(numberOfHours) << std::endl;

	return 0;
}
