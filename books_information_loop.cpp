#include <iostream>
#include <string>

struct BooksInfo {
	std::string title;
	std::string author;
	unsigned short int year;
	unsigned short int page;

};

void readBooks(BooksInfo& info, int bookNumber) {
	
	std::cout << "\nEnter details for book " << bookNumber << ":\n";
	std::cout << "Enter book tilte? \n";
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

void readAllBooks(BooksInfo books[], int size) {

	for (int i = 0; i < size; ++i) {
	readBooks(books[i], i + 1);
	
	}
}

void printAllBooks(const BooksInfo books[], int size) {

	for (int i = 0; i < size; ++i) {
	printBooks(books[i]);
	}
}


int main() {
	const int numberOfBooks = 2;
	BooksInfo books[numberOfBooks];

	readAllBooks(books, numberOfBooks);
	printAllBooks(books, numberOfBooks);
	
	

	return 0;
}


