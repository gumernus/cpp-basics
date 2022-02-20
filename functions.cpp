#include <iostream>
#include <string>

// Function declaration
std::string myFunction(std::string message = "default string", int number = 666);

// The main method
int main() {
  std::cout << myFunction();
  return 0;
}

// Function definition
std::string myFunction(std::string message, int number) {
	return message + " " + std::to_string(number) + "\n";
}

