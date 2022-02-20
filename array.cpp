#include <iostream>
#include <string>

int main() {
	std::string cars[5] = {"Volvo", "BMW", "Ford"};
	cars[3] = "Mazda";
	cars[4] = "Tesla";
  	for(int i = 0; i < 5; i++){
		std::cout << cars[i] << std::endl;
	}
  	return 0;
}

