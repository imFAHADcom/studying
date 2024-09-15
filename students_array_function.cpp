#include <iostream>
#include <string>

struct StudentInfo {

	std::string student_name;
	std::string student_id;
	std::string student_major;
	float student_gpa;
};

void getStudentCount(unsigned short int& size) {
	
	std::cout << "How many students do you want to enter information for? ";
	std::cin >> size;

}

void readInfo(StudentInfo& info, unsigned short int studentCount) {

	std::cout << "\nStudent count is: " << studentCount << "\n";
	std::cout << "Enter student name? ";
	std::cin.ignore(1, '\n');
	getline(std::cin, info.student_name);
	std::cout << "Enter student ID number? ";
	getline(std::cin, info.student_id);
	std::cout << "Enter student major? ";
	getline(std::cin, info.student_major);
	std::cout << "Enter student GPA? ";
	std::cin >> info.student_gpa;
	std::cin.ignore(1, '\n');
}

void printInfo(const StudentInfo& info) {
	
	std::cout << "\n***************************\n";
	std::cout << "Student name : " << info.student_name  << "\n";
	std::cout << "Student ID number : " << info.student_id  << "\n";
	std::cout << "Student major : " << info.student_major  << "\n";
	std::cout << "Student GPA : " << info.student_gpa  << "\n";
	std::cout << "***************************" << std::endl;
}


void readAllInfo(StudentInfo info[], unsigned short int size) {
	
	for (int i = 0; i < size; ++i ){
		readInfo(info[i], 1 + i);
	}

}


void printAllInfo(const StudentInfo info[], unsigned short int size) {

	for (int i = 0; i < size; ++i) {
		printInfo(info[i]);
	}

}

int main() {
	unsigned short int size;
	getStudentCount(size);

	StudentInfo*  info = new StudentInfo[size];
	readAllInfo(info, size);
	printAllInfo(info, size);
	delete[] info;

	return 0;
}
