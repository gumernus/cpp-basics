#include <iostream>

int main(){
	float x = 5;
	float y = 3;
	std::cout << x + y << std::endl; // plus: 8
	std::cout << x - y << std::endl; // mínus: 2
	std::cout << x * y << std::endl; // krát: 15
	std::cout << x / y << std::endl; // děleno: 1.66667 
	std::cout << ++x << std::endl; // zvýší o jedno: 6
	x = 5; // x je teď 6 protože "++x" je vlastně "x = x + 1"
	std::cout << --x << std::endl; // sníží o jedno: 4

	return 0;
}

