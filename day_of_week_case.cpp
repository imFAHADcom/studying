#include <iostream>

// This program allows the user to select a day number (1-7) and displays the corresponding day name.


enum Days {
	EN_SUNDAY = 1,
	EN_MONDAY = 2,
	EN_TUESDAY = 3,
	EN_WEDNESDAY = 4,
	EN_THURSDAY = 5,
	EN_FRIDAY = 6,
	EN_SATURDAY = 7,
};

void readDays(unsigned short int& dayNumber) {

	std::cout << "Choose day number (1 to 7), Please:" << std::endl;
	std::cin >> dayNumber;
}


void displayDayName(const unsigned short int& dayNumber) { 

	Days chooseDay = Days(dayNumber);
	
	switch (chooseDay) {
	
		case Days::EN_SUNDAY:
			std::cout << "Its Sunday" << std::endl;
		break;

		case Days::EN_MONDAY:
			std::cout << "Its Monday" << std::endl;
		break;

		case Days::EN_TUESDAY:
			std::cout << "Its Tuesday" << std::endl;
		break;

		case Days::EN_WEDNESDAY:
			std::cout << "Its Wednesday" << std::endl;
		break;

		case Days::EN_THURSDAY:
			std::cout << "Its Thursday" << std::endl;
		break;

		case Days::EN_FRIDAY:
			std::cout << "Its Friday" << std::endl;
		break;

		case Days::EN_SATURDAY:
			std::cout << "Its Saturday" << std::endl;
		break;

		default:
			std::cout << "Wrong Day!!" << std::endl;
	} 

}


int main(){
	unsigned short int userDayNumber;

	readDays(userDayNumber);
	displayDayName(userDayNumber);


	return 0;
}
