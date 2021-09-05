#include <iostream>

int main()
{
	int num;
	std::cout << "Please enter an integer: ";
	std::cin >> num;
	while(num <= 0 || num >= 100){
		std::cout << "Please enter a valid number: ";
		std::cin >> num;
	}
	int sqrt = num * num;
	std::cout << "The number squared is " << sqrt << "\n";
	return 0;
}
