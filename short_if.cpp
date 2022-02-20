#include <iostream>
#include <string>

int main(){

	int x = 10;
	std::string result = (x < 18) ? "x is smaller than 18" : "x is bigger than 18";
	std::cout << result << std::endl; // output: "x is smaller than 18"
	return 0;

}
