#include <iostream>
#include <string>


// Enum declaration
enum MaritalStatus {
	MARITAL_SINGLE,
	MARITAL_MARRIED,
	MARITAL_DIVORCED
};

// Structure declaration
struct EmployeeContact {
	int phone;
	std::string email;
};

struct EmployeeAddress {
	std::string country;
	std::string city;
	std::string street;
	std::string building;
};

struct PersonalInfo {
	std::string first_name;
	std::string last_name;
	EmployeeAddress address;
	EmployeeContact contact;
	unsigned int id_number;
	unsigned int company_number;
};

struct Employee {
	PersonalInfo info;
 	MaritalStatus marital_status;
};



int main() {
	// Variables Declaration
	Employee first_employee;
    

	// Variables Assignment
	first_employee.info.first_name = "User";
	first_employee.info.last_name = "Admin";
	first_employee.info.address.country = "Server";
	first_employee.info.address.city = "LocalHost";
	first_employee.info.address.street = "First street";
	first_employee.info.address.building = "Tower 12";
	first_employee.info.contact.phone = 0000000000;
	first_employee.info.contact.email = "Email@domain.com";
	first_employee.info.id_number = 1241539853;
	first_employee.info.company_number = 4250;
	first_employee.marital_status = MaritalStatus::MARITAL_SINGLE;



	// Outputs
	std::cout << "First Name: " << first_employee.info.first_name << "\n";
	std::cout << "Last Name: " << first_employee.info.last_name << "\n";
	std::cout << "Country: " << first_employee.info.address.country << "\n";
	std::cout << "City: " << first_employee.info.address.city << "\n";
	std::cout << "Street: " << first_employee.info.address.street << "\n";
	std::cout << "Building: " << first_employee.info.address.building << "\n";
	std::cout << "Phone: "<< first_employee.info.contact.phone << "\n";
	std::cout << "Email: " << first_employee.info.contact.email << "\n";
	std::cout << "ID Number: " << first_employee.info.id_number << "\n";
	std::cout << "Company Number: " << first_employee.info.company_number << "\n";
	std::cout << "Marital Status (Singal/0 Married/1): " << first_employee.marital_status << std::endl;

    return 0;
}

