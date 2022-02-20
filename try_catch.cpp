#include <iostream>

using namespace std;

int main(){
	int age = 15;

	try{
		if (age >= 18) {
			cout << "access granted\n";
		}
		else {
			throw (age); // můžeme použít error code "throw 505"
		}
	}
	catch (int badAge){ // catch cokoliv místo "int badAge" dát "..."
		cout << "access denied\n";
		cout << "age is: " << badAge << endl;
	}

	return 0;
}
