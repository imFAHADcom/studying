#include <iostream>

int main() {
	char letter = 'A';
	const char* greeting = "Hello";
	bool isTrue = true;

	char word[] = "Hello";
	
	std::cout << "Letter: " << letter << "\n";
	std::cout << "Greeting: " << greeting << "\n";
	std::cout << "Before modify Word: " << word << "\n";
	word[1] = 'E';
	std::cout << "After modify Word: " << word << "\n";
	std::cout << "Boolean: " << isTrue << std::endl; 

	// استخدام \x لتمثيل الحروف حسب قيمتها في جدول ASCII
	std::cout << "ASCCI: \x48\x65\x6C\x6C\x6F\n"; // يطبع Hello
	//\uXXXX - حرف Unicode حسب القيمة السداسية العشرية (Hexadecimal)
	std::cout << "Unicode: \u0048\u0065\u006C\u006C\u006F\n"; // يطبع Hello



	return 0;
}
