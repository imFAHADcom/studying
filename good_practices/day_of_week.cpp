/*
Write a program to ask the user to enter:
- Day
Then print the day as follows:
+ 1 Print Sunday
+ 2 Print Monday
+ 3 Print Tuesday
+ 4 Print Wednesday
+ 5 Print Thursday
+ 6 Print Friday
+ 7 Print Saturday
+ Otherwise print *Wrong Day" and ask the use to enter the day again.

Example Inputs:
6

Outputs:
Its Friday
*/

#include <iostream>
#include <string>


enum enDayOfWeek{
	sun = 1,
	mon = 2,
	tue = 3,
	wed = 4,
	thu = 5,
	fri = 6,
	sat = 7,
};


int readNumberInRange(std::string message, int from, int to){

	int number = 0;
	do {
		std::cout << message << std::endl;
		std::cin >> number;

	} while(number < 1 || number > 7);

	return number;
}



enDayOfWeek readDayOFweek(){

	
	return (enDayOfWeek) readNumberInRange("(Sat=1, Sun=2, Mon=3, Tue=4, Wed=5, Thu=6, Fri=7)?", 1, 7);

}


std::string getDayOfWeek(enDayOfWeek day){

	switch(day){
		case enDayOfWeek::sun:
			return "Sunday";
		case enDayOfWeek::mon:
			return "Monday";
		case enDayOfWeek::tue:
			return "Tuesday";
		case enDayOfWeek::wed:
			return "Wednesday";
		case enDayOfWeek::thu:
			return "Thursday";
		case enDayOfWeek::fri:
			return "Friday";
		default:
			return "Not a valid Day";
	}
}


int main(){
	

	std::cout << getDayOfWeek(readDayOFweek()) << std::endl;

	return 0;
}
