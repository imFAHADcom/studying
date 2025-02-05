#include <iostream>

struct InfoName
{
	std::string first_name;
	std::string last_name;

};

InfoName readFullname()
{
	InfoName fullName;

	std::cout << "Enter first name?\n";
	std::cin >> fullName.first_name;
	std::cout << "Enter last name?" << std::endl;
	std::cin >> fullName.last_name;

	return fullName;
}

std::string processingFullName(const InfoName& FULLNAME, bool reversed)
{
	std::string fullName;

	if(reversed)
	fullName = FULLNAME.last_name + " " + FULLNAME.first_name;
	else
	fullName = FULLNAME.first_name + " " + FULLNAME.last_name;


	return fullName;
}

void printFullName(const std::string& FULLNAME)
{

	std::cout << "-------------------\n" << "Your full name is: " << FULLNAME << std::endl;
}


int main()
{

	/*
	If entered true inside the function " processing Full Name() " is a reversed name,  the last name before the first name 
	but entered false shows the first name before the last name.	
	*/
	printFullName(processingFullName(readFullname(), true));

	return 0;
}
