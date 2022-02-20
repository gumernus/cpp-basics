#include <iostream>

int main() {
	long long int x; // "long long" kvůli 32bit limitu
  	std::cout << "Type a number: "; // První část inputu "zpráva"
	std::cin >> x; // Druhá část inputu "user input"
  	std::cout << "Your number is: " << x << std::endl;
  	return 0;
}
