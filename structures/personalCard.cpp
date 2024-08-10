#include <iostream>
using namespace std;

// Structure declaration
struct card {
	string star, name, city, country;
	unsigned int age, monthlySalary, yearlySalary;
	char gender;
	bool isMarrid;
};

int main() {
	// Variables Declaration
	card personal;

	// Variables Assignment
	personal.star = "**********************************";
	personal.name = "imFAHADcom.";
	personal.age = 00;
	personal.city = "here.";
	personal.country = "localhost.";
	personal.monthlySalary = 5000;
	personal.yearlySalary = personal.monthlySalary * 12;
	personal.gender = 'M';
	personal.isMarrid = false;


	//Outputs print
	cout << personal.star << "\nName: " << personal.name << "\nAge: " << personal.age << " years." << "\nCity: " << personal.city << "\nCountry: " << personal.country << "\nMonthly Salary: " << personal.monthlySalary << "\nYearly salary: " << personal.yearlySalary << "\nGender: " << personal.gender << "\nMarried: " << personal.isMarrid << "\n" << personal.star << endl;


 return 0;
}
