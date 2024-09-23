#include <iostream>
#include <string>

struct MovieInfo {
	std::string title;
	std::string director;
	unsigned short int realease_year;
	unsigned short int duration;

};

void getMovieCout(unsigned short int& size) {
	std::cout << "How many movies do you want enter information? ";
	std::cin >> size;

}

void readMovies(MovieInfo& info, unsigned short int movieNum) {
	
	std::cout << "\nEnter details for movie number " << movieNum << ":\n";
	std::cout << "Enter movie title? ";
	std::cin.ignore(1,'\n');
	getline(std::cin, info.title);
	std::cout << "Enter movie director? ";
	getline(std::cin, info.director);
	std::cout << "Enter movie realease year? ";
	std::cin >> info.realease_year;
	std::cout << "Enter movie duration for minutes? ";
	std::cin >> info.duration;
}

void printMovies(const MovieInfo& info) {

	std::cout << "\n*******************************\n";
	std::cout << "Movie title is: " << info.title << "\n";
	std::cout << "Movie director is: " << info.director << "\n";
	std::cout << "Movie realease year is: " << info.realease_year << "\n";
	std::cout << "Movie duration for minutes is: " << info.duration << "\n";
	std::cout << "*******************************" << std::endl;
}


void readAllMovies(MovieInfo movies[], unsigned short int size) {

	for (unsigned short int i = 0; i < size; ++i) {
		readMovies(movies[i], 1+ i);
	}

}

void printAllMovies(const MovieInfo movies[], unsigned short int size) {

	for (unsigned short int i = 0; i < size; ++i) {
		printMovies(movies[i]);
	}

}

int main() {
	unsigned short int size;
	getMovieCout(size);	

	MovieInfo* movies = new MovieInfo[size];

	readAllMovies(movies, size);
	printAllMovies(movies, size);
	delete[] movies;

	return 0;
}
