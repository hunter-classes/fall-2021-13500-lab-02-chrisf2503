#include <iostream>

int main()
{
	int lower;
	int upper;
	std::cout << "Please eneter L: ";
	std::cin >> lower;
	std::cout << "Please eneter U: ";
	std::cin >> upper;
	for(int i = lower; i < upper; i++){
		std::cout << i << " ";
	}
	std::cout << "\n";
}
