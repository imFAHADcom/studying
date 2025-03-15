/*
Print letters from A to Z
*/

#include <iostream>

void printLettersAtoZ(){

	for(int i = 65; i <= 90; ++i){
		std::cout << (char)i << std::endl;
	}

}


int main(){
	printLettersAtoZ();
	return 0;
}
