#include <iostream>

void readDay (unsigned short int& day) {

	std::cout << "Choose day number 1 to 7, Please: " << std::endl;
	std::cin >> day;
}

void checkDay(unsigned short int day) {
	if ( day == 1) {
		std::cout << "Sunday" << std::endl;
	}
	else if (day == 2) {
		std::cout << "Monday" << std::endl;
	
	}

	else if (day == 3) {
		std::cout << "Tuesday" << std::endl;

	}
	else if (day == 4) {
		std::cout << "Wednesday" << std::endl;

	}
	else if (day == 5) {
		std::cout << "Thursday" << std::endl;

	}
	else if (day == 6) {
		std::cout << "Friday" << std::endl;

	}
	else if (day == 7) {
		std::cout << "Saturday" << std::endl;

	}
	else {
		std::cout << "Wrong Day" << std::endl;
		readDay(day);
		checkDay(day);
	}
}

int main() {

	unsigned short int userDay;
	readDay(userDay);
	checkDay(userDay);

	return 0;
}
