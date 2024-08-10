#include <iostream>
using namespace std;

// Structure declaration
struct cars {
	string brand;
	string color;
	string model;
	int year;

};

int main() {
	// Variables Declaration 
	cars carOne,carTwo;

	// Variables Assignment
	carOne.brand = "Toyota";
	carOne.color = "White";
	carOne.model = "Camry";
	carOne.year = 2024;

	// Outputs
	cout << "Car brand is: " << carOne.brand << "\nColor is: " << carOne.color << "\nModel is: " << carOne.model << "\nYear is: " << carOne.year << endl;

	return 0;
}
