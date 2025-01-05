#include <iostream>
#include <string>

// January, February, March, April, May, June, July, August, September, October, November, and December

enum Months{
	EN_JANUARY = 1,
	EN_FEBRUARY = 2,
	EN_MARCH = 3,
	EN_APRIL = 4,
	EN_MAY = 5,
	EN_JUNE = 6,
	EN_JULY = 7,
	EN_AUGUST = 8,
	EN_SEPTEMBER = 9,
	EN_OCTOBER = 10,
	EN_NOVEMBER = 11,
	EN_DECEMBER = 12,
};

Months readInput() {
	unsigned short int monthNumber;

	while(true) {
		std::cout << "Choose month number (1 to 12), Please: " << std::endl;
		std::cin >> monthNumber;


		if (monthNumber > 0 && monthNumber < 13) {
			return Months(monthNumber);
		}
		else {
			std::cout << "Invalid monthNumber. Please enter a number between 1 and 12." << std::endl;
		}
	}
}


std::string checkMonth(Months monthNumber) {
	
	switch (monthNumber) {

		case Months::EN_JANUARY:
			return "January";
		break;

		case Months::EN_FEBRUARY:
			return "February";
		break;

		case Months::EN_MARCH:
			return "March";
		break;
	
		case Months::EN_APRIL:
			return "April";
		break;

		case Months::EN_MAY:
			return "May";
		break;

		case Months::EN_JUNE:
			return "June";
		break;

		case Months::EN_JULY:
			return "July";
		break;

		case Months::EN_AUGUST:
			return "August";
		break;

		case Months::EN_SEPTEMBER:
			return "September";
		break;

		case Months::EN_OCTOBER:
			return "October";
		break;

		case Months::EN_NOVEMBER:
			return "November";
		break;

		case Months::EN_DECEMBER:
			return "December";
		break;

		default:
			return "Worng month!!";
	}

}




int main() {

	std::cout << checkMonth(readInput()) << std::endl;



	return 0;
}	
