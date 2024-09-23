#include <iostream>
#include <string>

struct BooksInfo {
	std::string title;
	std::string author;
	unsigned short int year;
	unsigned short int page;

};

void getBookCout(unsigned short int& size ) {
	std::cout << "How many books do you want to enter information? ";
	std::cin >> size;

}

void readBooks(BooksInfo& info, unsigned short int bookNumber) {
	
	std::cout << "\nEnter details for book number: " << bookNumber << ":\n";
	std::cout << "Enter book title? \n";
	std::cin.ignore(1, '\n');
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

void readAllBooks(BooksInfo books[], unsigned short int size) {

	for (int i = 0; i < size; ++i) {
	readBooks(books[i], i + 1);
	
	}
}

void printAllBooks(const BooksInfo books[], unsigned short int size) {

	for (int i = 0; i < size; ++i) {
	printBooks(books[i]);
	}
}


int main() {
	unsigned short int size;
	getBookCout(size);


	BooksInfo* books = new BooksInfo[size]; 

	readAllBooks(books, size);
	printAllBooks(books, size);
	delete[] books;
	

	return 0;
}
