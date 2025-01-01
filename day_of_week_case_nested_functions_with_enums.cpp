#include <iostream>

enum Days {
	EN_SUNDAY = 1,
	EN_MONDAY = 2,
	EN_TUESDAY = 3,
	EN_WEDNESDAY = 4,
	EN_THURSDAY = 5,
	EN_FRIDAY = 6,
	EN_SATURDAY = 7,
};

 Days readUserInput() {
	unsigned short int dayNumber;

	while (true) {
		std::cout << "Choose day number (1 to 7), Please:" << std::endl;
		std::cin >> dayNumber; 
	
		if (dayNumber >= 1 && dayNumber <= 7) {
			return Days(dayNumber);
		}	
		else {
			std::cout << "Invalid input. Please enter a number between 1 and 7." << std::endl;
	
		}

	}

}

std::string displayDayName(Days dayNumber) {

	switch (dayNumber) {

		case Days::EN_SUNDAY:
			return "Today is Sunday" ;
		break;

		case Days::EN_MONDAY:
			return "Today is Monday" ;
		break;

		case Days::EN_TUESDAY:
			return "Today is Tuesday" ;
		break;

		case Days::EN_WEDNESDAY:
			return "Today is Wednesday" ;
		break;

		case Days::EN_THURSDAY:
			return "Today is Thursday" ;
		break;


		case Days::EN_FRIDAY:
			return "Today is Friday" ;
		break;

		case Days::EN_SATURDAY:
			return "Today is Saturday" ;
		break;

		default:
			return "Wrong day!!";

	}
}


int main() {

	std::cout << displayDayName(readUserInput()) << std::endl;


	return 0;
}
