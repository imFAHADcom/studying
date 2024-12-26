#include <iostream>

enum WeekDay {
	SUN_DAY = 1,
	MON_DAY = 2,
	TUE_DAY = 3,
	WED_DAY = 4,
	THU_DAY = 5,
	FRI_DAY = 6,
	SAT_DAY = 7,
};

void showWeekDayMenu() {
	std::cout << "**********************\n";
	std::cout << "       Week Days      \n";
	std::cout << "**********************\n";
	std::cout << "1: Sunday\n";
	std::cout << "2: Monday\n";
	std::cout << "3: Tuesday\n";
	std::cout << "4: Wednesday\n";
	std::cout << "5: Thursday\n";
	std::cout << "6: Friday\n";
	std::cout << "7: Saturday\n";
	std::cout << "**********************\n";
	std::cout << "Enter the number of day?, Please... " << std::endl;
}

WeekDay readWeekDay() {
	unsigned short int weekDayNumber;
	std::cin >> weekDayNumber;

	return WeekDay(weekDayNumber);
}


std::string getWeekDayName(WeekDay weekDayName) {

	switch (weekDayName){
	
	case WeekDay::SUN_DAY:
		return "Sunday";
	break;

	case WeekDay::MON_DAY:
		return "Monday";
	break;
	case WeekDay::TUE_DAY:
		return "Tuesday";
	break;

	case WeekDay::WED_DAY:
		return "Wednesday";
	break;

	case WeekDay::THU_DAY:
		return "Thursday";
	break;

	case WeekDay::FRI_DAY:
		return "Friday";
	break;

	case WeekDay::SAT_DAY:
		return "Saturday";
	break;

	default:
        return "Not a week day!\n";
	}	
}



int main() {

//	WeekDay userWeekDayNumber;

	showWeekDayMenu();

	std::cout << "Today is: " << getWeekDayName(readWeekDay()) << std::endl;
	return 0;
}
