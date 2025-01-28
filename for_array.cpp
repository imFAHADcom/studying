#include <iostream>


void readArrayData(int array[100], int& length) {
	std::cout << "Enter how many do you want number? 1 to 100 " << std::endl;
	std::cin >> length;

	for(int i = 0; i <= length - 1; ++i){
		std::cout << "enter number " << i + 1 << std::endl;
		std::cin >> array[i];
	}
}


void printArrayData(int array[100], int& length){

	for(int i = 0; i <= length - 1; ++i){

		std::cout << "Number [" << i + 1 << "] : " << array[i] << std::endl;
	}
}

int calculateArraySum(int array[100], int& length){

	int sum = 0;
	for(int i = 0; i <= length - 1; ++i){
		sum += array[i];
	}

	return sum;
}

float calculateArrayAverage(int array[100], int& length) {
	return float(calculateArraySum(array, length)) / length;

}
int main() {
	int array[100], length = 0;
	
	readArrayData(array, length);
	printArrayData(array, length);

	std::cout << "\n************************************\n";
	std::cout << "Sum: " << calculateArraySum(array, length) << std::endl;
	std::cout << "Average = " << calculateArrayAverage(array, length) << std::endl;


	return 0;
}
