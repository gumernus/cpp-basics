#include <iostream>
#include <cmath>

int main() {
	int x = 5;
	int y = 2;
	int z = 6.2;
	std::cout << std::max(x, y) << std::endl; // najde největší value: 5
	std::cout << std::min(x, y) << std::endl; // najde nejmenší value: 2
	std::cout << std::sqrt(x) << std::endl; // odmocnina: 2.23607
	std::cout << std::round(z) << std::endl; // zaokrouhlí: 6
	return 0;
}

