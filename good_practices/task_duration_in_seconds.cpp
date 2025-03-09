/*

Werite a program to calculate the task duration in seconds and print it on screen.
=> Given the time duration of a task in the number of days, hours, minutes, and seconds.


Inputs:
2
5
45
35

Outputs:
193,535 Seconds 
*/


#include <iostream>
#include <string>


struct stTaskDuration{int numberOfDays, numberOfHuors, numberOfMinuts, numberOfSeconds;};

int readPositiveNumber(std::string message){
	int number;
	
	do{
		std::cout << message << std::endl;
		std::cin >> number;
	} while(number <= 0);

	return number;
}

stTaskDuration readTaskDuration(){

	stTaskDuration taskDuration;

	taskDuration.numberOfDays = readPositiveNumber("Enter number of days, please?");
	taskDuration.numberOfHuors = readPositiveNumber("Enter number of hours, please?");
	taskDuration.numberOfMinuts = readPositiveNumber("Enter number of minutes, please?");
	taskDuration.numberOfSeconds = readPositiveNumber("Enter number of seconds, Please?");

	return taskDuration;
}

int taskDurationInSeconds(stTaskDuration taskDuration){

	int durationInSeconds = 0; 
	durationInSeconds = taskDuration.numberOfDays * 24 * 60 * 60;
	durationInSeconds += taskDuration.numberOfHuors * 60 * 60;
	durationInSeconds += taskDuration.numberOfMinuts * 60;
	durationInSeconds += taskDuration.numberOfSeconds;

	return durationInSeconds;
}


int main(){
	stTaskDuration userReadTaskDuration = readTaskDuration();

	std::cout  << "\nTask duration in seconds: " << taskDurationInSeconds(userReadTaskDuration) << std::endl;


	return 0;
}
