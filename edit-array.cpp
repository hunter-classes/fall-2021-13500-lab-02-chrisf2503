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
		std::cout << "\n \n";
		for(int i = 0; i < 10; i++){
			std::cout << nums[i] << " ";
		}
		std::cout << "\n \n";
		std::cout << std::endl;
		std::cout << "Input index: ";
		std::cin >> index;
		std::cout << "Input value: ";
		std::cin >> userInput;
		if(index < 10 && index > -1){
			nums[index] = userInput;
		}
	}
	while(index < 10 && index > -1);
	std::cout << "\n \n";
	std::cout << "Index out of range. Exit. \n";
	return 0;
}
