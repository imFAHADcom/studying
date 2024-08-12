#include <iostream>
using namespace std;




enum EmploymentStatus {
	EmploymentStatus_ACTIVE,
	EmploymentStatus_ON_LEAVE,
	EmploymentStatus_RETIRED,

};

struct Employee {
	string name;
	unsigned int id, salary;
	EmploymentStatus status;
};



int main() {
	Employee firstEmployee;
	unsigned int statusInput;

	cout << "Enter the name of the employee: ";
	cin >> firstEmployee.name;
	cout << "Enter the ID of the employee: ";
	cin >> firstEmployee.id;
	cout << "Enter the salary of the employee: ";
	cin >> firstEmployee.salary;
	cout << "Enter the status of the employee (0 for active, 1 FOR On leave, 2 for retired): ";
	cin >> statusInput;

	firstEmployee.status = static_cast<EmploymentStatus>(statusInput);
	
	cout << "Name of the employee: " << firstEmployee.name << "\n";
	cout << "ID of the employee: " << firstEmployee.id << "\n";
	cout << "Salary of the employee: " << firstEmployee.salary << "\n";
	cout << "Status of the employee (0 for active, 1 FOR On leave, 2 for retired): " << firstEmployee.status << "\n";
 

	return 0;
}
