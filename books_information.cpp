#include <iostream>
#include <string>

struct BooksInfo {
	std::string title;
	std::string author;
	unsigned short int year;
	unsigned short int page;

};

void readBooks(BooksInfo& info) {

	std::cout << "\nEnter book tilte? \n";
	getline(std::cin, info.title);
	std::cout << "Enter book author? \n";
	getline(std::cin, info.author);
	std::cout << "Enter book year? \n";
	std::cin >> info.year;
	std::cout << "Enter book page? \n";
	std::cin >> info.page;

	std::cin.ignore(1, '\n');
};

void printBooks(const BooksInfo& info) {
	
	std::cout << "\n*****************************\n";
	std::cout << "Book title is: " << info.title << "\n";
	std::cout << "Book author is: " << info.author  << "\n";
	std::cout << "Book year is: " << info.year << "\n";
	std::cout << "Book page is: " << info.page << "\n";
	std::cout << "*****************************\n" << std::endl;

}

void readAllBooks(BooksInfo books[2]) {
	readBooks(books[0]);
	readBooks(books[1]);

}

void printAllBooks(const BooksInfo books[2]) {
	printBooks(books[0]);
	printBooks(books[1]);

}


int main() {
	BooksInfo books[2];

	readAllBooks(books);
	printAllBooks(books);
	
	

	return 0;
}
