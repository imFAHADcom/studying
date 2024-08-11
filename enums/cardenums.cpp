#include <iostream>
using namespace std;

// enums declaration
enum Gender {
	Gender_FEMALE,
	Gender_MALE 
};
enum  MaritalStatus {
	MaritalStatus_SINGLE, 
	MaritalStatus_MARRIED, 
	MaritalStatus_DIVORCED
};
enum FavoriteColor {
	FavoriteColor_RED,
	FavoriteColor_BLUE,
	FavoriteColor_BLACK,
	FavoriteColor_WHITE
};

int main() {
	
	// Variables Declaration	
	Gender myGender;
	MaritalStatus isMarried;
	FavoriteColor myColor;
	string star, name, city, country;
	unsigned int age, monthlySalary, yearlySalary;

	// Variables Assignment
	star = "**********************************";
	name = "imFAHADcom.";
	age = 00;
	city = "Here.";
	country = "localhost.";
	monthlySalary = 5000;
	yearlySalary = monthlySalary * 12;
	myGender = Gender::Gender_MALE;
	isMarried = MaritalStatus::MaritalStatus_SINGLE;


	// Outputs
	cout << star << "\n";
	cout << "Name: " << name << "\n";
	cout << "Age: " << age << " Years.\n";
	cout << "City: " << city << "\n";
	cout << "Country: " << country << "\n";
	cout << "Monthly Salary: " << monthlySalary << "\n";
	cout << "Yearly Salary: " << yearlySalary << "\n";
	cout << "Gender: " << myGender << "\n";
	cout << "Married: " << isMarried << "\n";
	cout << star << endl;

	return 0;
}
