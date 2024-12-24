#include <iostream>

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


void readMonthNumber(unsigned short int& monthNumber) {
		std::cout << "Enter month number (1 to 12), Please: " << std::endl;
		std::cin >> monthNumber;
		
		while (monthNumber < 1 || monthNumber > 12) {
			std::cout << "Invalid input. Enter month number (1 to 12):" << std::endl;
			std::cin >> monthNumber;
		}
}


void displayMonthName(const unsigned short int& monthNumber) {

	Months chooseMonth = Months(monthNumber);

	switch (monthNumber) {

	case Months::EN_JANUARY:
		std::cout << "January" << std::endl;
	break;	

	case Months::EN_FEBRUARY:
		std::cout << "February" << std::endl;
	break;

	case Months::EN_MARCH:
		std::cout << "March" << std::endl;
	break;

	case Months::EN_APRIL:
		std::cout << "April" << std::endl;
	break;

	case Months::EN_MAY:
	std::cout << "May" << std::endl;
	break;

	case Months::EN_JUNE:
		std::cout << "June" << std::endl;
	break;

	case Months::EN_JULY:
		std::cout << "July" << std::endl;
	break;

	case Months::EN_AUGUST:
		std::cout << "August" << std::endl;
	break;

	case Months::EN_SEPTEMBER:
		std::cout << "September" << std::endl;
	break;

	case Months::EN_OCTOBER:
		std::cout << "October" << std::endl;
	break;

	case Months::EN_NOVEMBER:
		std::cout << "November" << std::endl;
	break;

	case Months::EN_DECEMBER:
		std::cout << "December" << std::endl;
	break;

	default:
		std::cout << "Wrong month number, Try again please!!" << std::endl;
	}
}


int main() {
	unsigned short int userMonthNumber;

	readMonthNumber(userMonthNumber);
	displayMonthName(userMonthNumber);

	return 0;
}
