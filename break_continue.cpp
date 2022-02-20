#include <iostream>

int main() {
  for (int i = 0; i < 10; i++) {
	if (i == 2){
		std::cout << "continue" << std::endl;
		continue;
	}
    if (i == 4) {
      break;
    }
	std::cout << i << std::endl;
  } 
  return 0;
}

