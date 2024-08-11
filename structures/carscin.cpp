#include <iostream>
using namespace std;

// Structure declaration
struct Car {
	string make;
	string model;
	string color;
	int year;
};


int main() {

	// Variables Declaration
	Car myCar;

	// Variables Assignment
	cout << "Enter the make of the car? ";
	cin >> myCar.make;
	cout << "Enter the model of the car? ";
	cin >> myCar.model;
	cout << "Enter the color of the car? ";
	cin >> myCar.color;
	cout << "Enter the year of the car? ";
	cin >> myCar.year;

	// Outputs
	cout << "\nCar Details:" << "\n";
	cout << "Make: " << myCar.make <<  "\n";
	cout << "Model: " << myCar.model << "\n";
	cout << "Color: " << myCar.color << "\n";
	cout << "Year: " << myCar.year << endl;


	return 0;
}
