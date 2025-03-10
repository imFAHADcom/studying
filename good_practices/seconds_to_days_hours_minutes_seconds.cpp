/*

Write a program that inputs the number of seconds and changes it to days, hours, minutes, and seconds.

Input:
193,535

Outputs:
2:5:45:35

*/

#include <iostream>
#include <string>
#include <cmath>


struct stTaskDuration{int numberOfDays, numberOfHours, numberOfMinutes, numberOfSeconds;};

int readPositiveNumber(std::string message){

	int number;

	do{
		std::cout << message << std::endl;
		std::cin >> number;
	} while(number <= 0);

	return number;
}


stTaskDuration secondsToTaskDuration(const int& TOTAL_SECONDS){
	
	stTaskDuration taskDuration;
	const int secondsPerDays = 24 * 60 * 60;
	const int secondsPerHours = 60 * 60;
	const int secondsPerMinuts = 60;

	int remainder = 0;

	taskDuration.numberOfDays = floor(TOTAL_SECONDS / secondsPerDays);
	remainder = TOTAL_SECONDS % secondsPerDays;

	taskDuration.numberOfHours = floor(remainder / secondsPerHours);
	remainder = remainder % secondsPerHours;
 
	taskDuration.numberOfMinutes = floor(remainder / secondsPerMinuts);
	remainder = remainder %  secondsPerMinuts;

	taskDuration.numberOfSeconds = remainder;

	return taskDuration;
}


void printTaskDuration(stTaskDuration taskDuration){

	std::cout << "\n" 
	<< taskDuration.numberOfDays << ":"
	<< taskDuration.numberOfHours << ":"
	<< taskDuration.numberOfMinutes << ":"
	<< taskDuration.numberOfSeconds << std::endl;
}


int main(){

	int totalseconds = readPositiveNumber("Enter Seconds, Please?");

	printTaskDuration(secondsToTaskDuration(totalseconds));
	return 0;
}
