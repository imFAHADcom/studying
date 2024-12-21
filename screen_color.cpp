#include <iostream>

enum ScreenColor {
    COLOR_RED = 1,
    COLOR_BLUE = 2,
    COLOR_GREEN = 3,
    COLOR_YELLOW = 4,
    COLOR_RESET = 0,
};

void readColorNumber (signed short int& colorNumber) {
    // Display options
    std::cout << "********************************\n";
    std::cout << "Choose the number of your color, please?\n";
    std::cout << "(1) Red\n";
    std::cout << "(2) Blue\n";
    std::cout << "(3) Green\n";
    std::cout << "(4) Yellow\n";
    std::cout << "(0) Background color reset\n";
    std::cout << "********************************" << std::endl;

    // Receive input
    std::cout << "Your choice? ";
    std::cin >> colorNumber;

    // Validate input
    if (colorNumber < 0 || colorNumber > 4) {
        std::cout << "Wrong choice!!" << std::endl; // Correct spelling
    }

}


void chooseColorCode(signed short int colorNumber) {
    // Assign the selected color
    ScreenColor chooseColor = ScreenColor(colorNumber);


    // Change background color based on selection
    if (chooseColor == COLOR_RED) {
        std::cout << "\033[41m"; // Change background to red
        std::cout << "\033[2J\033[H"; // Clear the screen
        std::cout << "Red color selected" << std::endl;
    } else if (chooseColor == COLOR_BLUE) {
        std::cout << "\033[44m"; // Change background to blue
        std::cout << "\033[2J\033[H"; // Clear the screen
        std::cout << "Blue color selected" << std::endl;
    } else if (chooseColor == COLOR_GREEN) {
        std::cout << "\033[42m"; // Change background to green
        std::cout << "\033[2J\033[H"; // Clear the screen
        std::cout << "Green color selected" << std::endl;
    } else if (chooseColor == COLOR_YELLOW) {
        std::cout << "\033[43m"; // Change background to yellow
        std::cout << "\033[2J\033[H"; // Clear the screen
        std::cout << "Yellow color selected" << std::endl;
    } else if (chooseColor == COLOR_RESET) {
        std::cout << "\033[0m"; // Reset to default settings
        std::cout << "\033[2J\033[H"; // Clear the screen
        std::cout << "Background reset successfully!" << std::endl;
    }


}



int main() {
    signed short int userColorNumber;

	readColorNumber(userColorNumber);
	chooseColorCode(userColorNumber);

    return 0;
}
