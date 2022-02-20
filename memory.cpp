#include <iostream>
#include <string>

int main() {
	std::string food = "Pizza";
	std::cout << &food << std::endl; // "&" je adresa variable

	std::string* ptr = &food; //pointer "*" 
	std::cout << ptr << std::endl;

  return 0;
}

