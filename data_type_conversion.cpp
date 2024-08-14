#include <iostream>
#include <string>


int main() {
	
	// Declare variables
	std::string st1 = "43.22";
	unsigned short int n1 = 20;
	double n2 = 33.5;
	float n3 = 55.23;

	// Date type conversion
	double st1ConDouble = stod(st1);
	float st1ConFloat = stof(st1);
	unsigned short int st1ConInteger = stoi(st1);
	
	std::string n1ConString = std::to_string(n1);

	std::string n2ConString = std::to_string(n2);

	std::string n3ConString = std::to_string(n3);
	unsigned short int n3ConIntegerC = n3;
	unsigned short int n3ConIntegerE = (int) n3;
	unsigned short int n3ConIntegerE2 = int(n3);



	//output 
	std::cout << st1 << " String to duoble: " << st1ConDouble << "\n";
	std::cout << st1 << " String to float : " << st1ConFloat << "\n";
	std::cout << st1 << " String to int : " << st1ConInteger << "\n";

	std::cout << "------------------------------------------------------------------------------------\n";

	std::cout << n1 << " Integer to string: " << n1ConString << "\n";
	std::cout << n2 << " Double to string: " << n2ConString << "\n";


	std::cout << "------------------------------------------------------------------------------------\n";

	std::cout << n3 << " Float to string: " << n3ConString << "\n";
	std::cout << n3 << " Float to integer \"Implicit conversion from double to int\" : " << n3ConIntegerC << "\n";
	std::cout << n3 << " Float to integer \"Explicit conversion (int) n3 \" : " << n3ConIntegerE << "\n";
	std::cout << n3 << " Float to integer \"Explicit conversion int(n3) \" : " << n3ConIntegerE2 << std::endl;



	return 0;
};
