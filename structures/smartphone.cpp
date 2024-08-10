#include <iostream>
using namespace std;

// Structure declaration
struct isSize {
	float length;
	float width;
	float thickness;
};

// Structure declaration
struct smartphone {
	string brand;
	string model;
	string version;
	isSize size;
};

int main() {
	// Variables Declaration
	smartphone phoneOne,phoneTwo;

	// Variables Assignment smartphone apple
	phoneOne.brand = "Apple";
	phoneOne.model = "iPhone";
	phoneOne.version = "15 pro";
	phoneOne.size.length = 146.6;
	phoneOne.size.width = 70.6;
	phoneOne.size.thickness = 8.25;

	// Variables Assignment smartphone samsung
	phoneTwo.brand = "Samsung";
	phoneTwo.model = "Galaxy";
	phoneTwo.version = "S24 Ultra";
	phoneTwo.size.length = 162.3;
	phoneTwo.size.width = 79.8;
	phoneTwo.size.thickness = 8.9;


	// Outputs
	cout << "Smartphone Number One\n-----------------------\nbrand is: " << phoneOne.brand << "\nModel is: " << phoneOne.model << "\nversion is: " << phoneOne.version << "\nlength is: " << phoneOne.size.length << " mm" << "\nwidth is: " << phoneOne.size.width << " mm" << "\nthickness is: " << phoneOne.size.thickness << " mm\n\n\n";
	cout << "Smartphone Number Two\n-----------------------\nbrand is: " << phoneTwo.brand << "\nModel is: " << phoneTwo.model << "\nversion is: " << phoneTwo.version << "\nlength is: " << phoneTwo.size.length << " mm" << "\nwidth is: " << phoneTwo.size.width << " mm" << "\nthickness is: " << phoneTwo.size.thickness << " mm" << endl;


	return 0;
}
