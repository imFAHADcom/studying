#include <iostream>
#include <cmath>

void secondsToDaysHoursMinutesSeconds(int totalSeconds) {

	int secondsPerDay = 24 * 60 * 60;
	int secondsPerHour = 60 * 60;
	int secondsPerMinute = 60; 
	
	int numberOfDays = floor(totalSeconds / secondsPerDay);
	int remaider = totalSeconds % secondsPerDay;

	int numberOfHours = floor(remaider / secondsPerHour);
	remaider = remaider % secondsPerHour;
	
	int numberOfMinutes = floor(remaider / secondsPerMinute);
	remaider = remaider % secondsPerMinute;

	int numberOfSeconds = remaider;

	std::cout << numberOfDays << ":" << numberOfHours << ":" << numberOfMinutes << ":" << numberOfSeconds << std::endl;	
}


int main() {

	int enterTotalSeconds;

	std::cout << "Enter total seconds? \n";
	std::cin >> enterTotalSeconds;

	secondsToDaysHoursMinutesSeconds(enterTotalSeconds);

	return 0;
}
