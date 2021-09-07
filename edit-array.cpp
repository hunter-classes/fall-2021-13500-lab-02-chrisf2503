#include <iostream>

int main()
{
	int nums[10];
	int userInput;
	int index;
	for(int i = 0; i < 10; i++){
		nums[i] = 1;
	}
	do{
		for(int i = 0; i < 10; i++){
			std::cout << nums[i] << " ";
		}
		std::cout << "\n \n";
		std::cout << std::endl;
		std::cout << "Input index: ";
		std::cin >> index;
		std::cout << "Input value: ";
		std::cin >> userInput;
		nums[index] = userInput;
	}
	while(index < 10 && index > -1);
	std::cout << "\N \N":
	std::cout << "Index out of range. Exit. ";
	return 0;
}
