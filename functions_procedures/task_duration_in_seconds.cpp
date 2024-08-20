#include <iostream>

int calculateSeconds(int days, int hours, int minutes, int seconds) {
	
	days = days * 24 * 60 * 60;	
	hours = hours * 60 * 60;
	minutes = minutes * 60;

	return days + hours + minutes + seconds;
}


int main() {
	int enterDays, enterHours, enterMinutes, enterSeconds;

	std::cout << "Enter days? \n";
	std::cin >> enterDays;
	std::cout << "Enter hours? \n";
	std::cin >> enterHours;
	std::cout << "Enter minutes? \n";
	std::cin >> enterMinutes;
	std::cout << "Enter seconds? \n";
	std::cin >> enterSeconds;

	std::cout << calculateSeconds(enterDays, enterHours, enterMinutes, enterSeconds) << " Seconds" << std::endl;


	return 0;
}
