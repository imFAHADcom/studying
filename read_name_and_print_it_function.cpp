#include <iostream>
#include <string>


std::string readName()
{
	std::string name;
	std::cout << "Enter your name? " << std::endl;
	getline(std::cin, name);


	return name;
}

void printName(std::string name)
{

	std::cout << "Your name is: " << name << std::endl;


}


int main()
{

	printName(readName());

	return 0;

}
