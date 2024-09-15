#include <iostream>
#include <string>

struct CarsInfo {

	std::string car_make;
	std::string car_model;
	unsigned short int car_year;
	std::string car_serial;
};


void getCarCout(unsigned short int& size) {

	std::cout << "How many cars do you want to enter information? ";
	std::cin >> size;

}

void readCars(CarsInfo& info, unsigned short int carNumber) {

	std::cout << "\nCar number: " << carNumber << "\n";
	std::cout << "Enter car make? ";
	std::cin.ignore(1, '\n');
	getline(std::cin, info.car_make);
	std::cout << "Enter car model? ";
	getline(std::cin, info.car_model);
	std::cout << "Enter car year? ";
	std::cin >> info.car_year;
	std::cout << "Enter car serial number? ";
	std::cin.ignore(1, '\n');
	getline(std::cin, info.car_serial);
}	

void printCars(const CarsInfo& info) {

	std::cout << "\n**********************************\n";
	std::cout << "Car make is: " << info.car_make << "\n";
	std::cout << "Car model is: " << info.car_model << "\n";
	std::cout << "Car year is: " << info.car_year << "\n";
	std::cout << "Car serial number is: " << info.car_serial << "\n";
	std::cout << "**********************************" << std::endl;
}


void readAllCars(CarsInfo info[], unsigned short int size) {

	for (int i = 0; i < size; ++i) {
		readCars(info[i], 1 + i);
	}
} 

void printAllCars(const CarsInfo info[], unsigned short int size) {
	for (int i = 0; i < size ; ++i) {
		printCars(info[i]);
	}

}


int main() {

	unsigned short int size;
	getCarCout(size);

	CarsInfo* info = new CarsInfo[size];
	readAllCars(info, size);
	printAllCars(info, size);
	delete[] info;

	return 0;
}
