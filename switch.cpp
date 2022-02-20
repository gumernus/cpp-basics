#include <iostream>

int main() {

	int option = 4;

	switch(option) {
		case 1:
			std::cout << "option 1" << std::endl; // pokud option = 1
			break;
		case 2: 
			std::cout << "option 2" << std::endl; // pokud option = 2
			break;
		default:
			std::cout << "default option" << std::endl; // pokud ani jedna z předešlách cases
	}

	return 0;

}
