#include <iostream>
#include <string>

struct PeopleInfo {
	std::string first_name;
	std::string last_name;
	unsigned short int age;
	std::string phone;
};

void readInfo(PeopleInfo& info) {
	std::cout << "Enter first name? \n"; 
	getline(std::cin, info.first_name);
	std::cout << "Enter last name? \n"; 
	getline(std::cin, info.last_name);
	std::cout << "Enter age? \n"; 
	std::cin >> info.age;
	std::cout << "Enter phone number? \n";
	std::cin.ignore(1,'\n');
	getline(std::cin, info.phone);

}

void printInfo(PeopleInfo info) {
	std::cout << "**************************\n";
	std::cout << info.first_name << "\n";
	std::cout << info.last_name << "\n";
	std::cout << info.age << " Years."<< "\n";
	std::cout << info.phone << "\n";
	std::cout << "**************************" << std::endl;
}

void readPersonsInfo(PeopleInfo info[2]) {
	readInfo(info[0]);
	readInfo(info[1]);
}

void printPersonsInfo(PeopleInfo info[2]) {
	printInfo(info[0]);
	printInfo(info[1]);
}

int main() {
	PeopleInfo persons[2];

	readPersonsInfo(persons);
	printPersonsInfo(persons);


	return 0;

}
