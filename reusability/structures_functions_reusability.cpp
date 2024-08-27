#include <iostream>
#include <string>

struct EmployeeInfo {
	std::string full_name;
	int age;
	std::string city;
	std::string country;
	int monthly_salary;
	char gender;
	std::string is_married;
};

void readInfo(EmployeeInfo& info) {
	std::cout << "Enter fullname? \n";
	getline(std::cin, info.full_name);
	
	std::cout << "Enter age? \n";
	std::cin >> info.age;
	
	std::cout << "Enter country? \n";
	std::cin >> info.country;

	std::cout << "Enter city? \n";
	std::cin >> info.city;
	
	std::cout << "Enter monthly salary? \n";
	std::cin >> info.monthly_salary;

	std::cout << "Enter Gender M/F ? \n";
	std::cin >> info.gender;

	std::cout << "Enter is married Yes/No? \n";
	std::cin >> info.is_married;
}

void printInfo(EmployeeInfo info) {

	std::cout << "*********************************\n";
	std::cout << "Name: " << info.full_name << ".\n";
	std::cout << "Age: " << info.age << " years.\n";
	std::cout << "Country: " << info.country << ".\n";
	std::cout << "City: " << info.city << ".\n";
	std::cout << "Monthly Salary: " << info.monthly_salary << "\n";
	std::cout << "Yearly Salary: " << info.monthly_salary * 12 << "\n";
	std::cout << "Gender: " << (info.gender == 'm'? "Male" : "Female") << "\n";
	std::cout << "Married: " << (info.is_married == "yes"? "Married" : "unMarried") << "\n";
	std::cout << "*********************************\n";

}


int main() {

	EmployeeInfo personal1;

	readInfo(personal1);
	printInfo(personal1);


	return 0;
}
