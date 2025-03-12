/*
Write a progrom to ask the user fo eater:
- Month

Then print the dey as follows: 
+ 1 print January.
+ 2 print February.
+ 3 print March.
+ 4 print April.
+ 5 print May.
+ 6 print June.
+ 7 print July.
+ 8 print August.
+ 9 print September.
+ 10 print October.
+ 11 print November.
+ 12 print December.
+ Otherwise print “Wrong Month end ask the use to enter the Month again.

Example Inputs:
11

Outputs:
November.

*/

#include <iostream>
#include <string>

enum enMonthOfYear{JANUARY = 1, FEBRUARY = 2, MARCH = 3, APRIL = 4, MAY = 5, JUNE = 6, JULY = 7, AUGUST = 8, SEPTEMBER = 9, OCTOBER = 10, NOVEMBER = 11, DECEMBER = 12};

int readNumberInRange(std::string message, int from, int to){

	int number = 0;
	do{
		std::cout << message << std::endl;
		std::cin >> number;
	} while(number < 1 || number > 12);

	return number;
}


enMonthOfYear readMonthOfYear(){
	return (enMonthOfYear) readNumberInRange("Choose a month 1 to 12", 1, 12);
}

std::string getMonthOfYear(enMonthOfYear month){

	switch(month){
		case enMonthOfYear::JANUARY:
			return "January";
		case enMonthOfYear::FEBRUARY:
			return "FEBRUARY";
		case enMonthOfYear::MARCH:
			return "March";
		case enMonthOfYear::APRIL:
			return "April";
		case enMonthOfYear::MAY:
			return "May";
		case enMonthOfYear::JUNE:
			return "June";
		case enMonthOfYear::JULY:
			return "July";
		case enMonthOfYear::AUGUST:
			return "August";
		case enMonthOfYear::SEPTEMBER:
			return "September";
		case enMonthOfYear::OCTOBER:
			return "October";
		case enMonthOfYear::NOVEMBER:
			return "November";
		case enMonthOfYear::DECEMBER:
			return "December";
		default:
			return "Not a valid Month";
	}

}

int main(){

	std::cout << getMonthOfYear(readMonthOfYear()) << std::endl;

	return 0;
}
