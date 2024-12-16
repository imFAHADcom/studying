#include <iostream>

void readGrade(unsigned short int& grade) {
	std::cout << "Enter your grade? " << std::endl;
	std::cin >> grade;
}

void checkGrade(unsigned short int grade) {
	if (grade >= 90) {
		std::cout << "A" << std::endl;
	}
	else if (grade >= 80 ) {
		std::cout << "B" << std::endl;
	}
	else if (grade >= 70 ) {
		std::cout << "C" << std::endl;
	}
	else if (grade >= 60) {
		std::cout << "D" << std::endl;
	}
	else if (grade >= 50 ) {
		std::cout << "E" << std::endl;
	}
	else {
		std::cout << "F" << std::endl;
	}
}


int main () {
	unsigned short int userGrade;

	readGrade(userGrade);
	checkGrade(userGrade);

	return 0;
}
