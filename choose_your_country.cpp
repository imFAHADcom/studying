#include <iostream>

enum GulfCountry {
	KUWAIT_COUNTRY = 1,
	SAUDI_ARABIA_COUNTRY = 2,
	BAHRAIN_COUNTRY = 3,
	QATAR_COUNTRY = 4,
	UAE_COUNTRY = 5,
	OMAN_COUNTRY = 6,
};

void readCountry(unsigned short int& country) {
	std::cout << "********************************************\n";
	std::cout << "Enter the number of your country? \n";
	std::cout << "(1) Kuwait\n";
	std::cout << "(2) Saudi Arabia\n";
	std::cout << "(3) Bahrain\n";
	std::cout << "(4) Qatar\n";
	std::cout << "(5) UAE\n";
	std::cout << "(6) Oman\n";
	std::cout << "********************************************\n";
	std::cout << "Your choice? " << std::endl;
	std::cin >> country;

	if (country < 1 || country > 6) {
		std::cout << "Wrong choice!!" << std::endl;
	}
}

void chooseCountry(unsigned short int country) {
	GulfCountry countryNumber = GulfCountry (country);

	if (country == GulfCountry::KUWAIT_COUNTRY) {
		std::cout << "Your country is Kuwait" << std::endl;
	}	
	else if (country == GulfCountry::SAUDI_ARABIA_COUNTRY) {
		std::cout << "Your country is Saudi Arabia" << std::endl;
	}	
	else if (country == GulfCountry::BAHRAIN_COUNTRY) {
		std::cout << "Your country is Bahrain" << std::endl;
	}
	else if (country == GulfCountry::QATAR_COUNTRY) {
		std::cout << "Your country is Qatar" << std::endl;
	}
	else if (country == GulfCountry::UAE_COUNTRY) {
		std::cout << "Your country is UAE" << std::endl;
	}
	else if (country == GulfCountry::OMAN_COUNTRY) {
		std::cout << "Your country is Oman" << std::endl;
	}
}


int main() {
	unsigned short int userCounter;

	readCountry(userCounter);
	chooseCountry(userCounter);


	return 0;
}
