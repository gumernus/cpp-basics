#include <iostream>
#include <string>

using namespace std;
int main(){

	int i = 4;
	string text = "Player ";
	text += to_string(i);
	cout << text << endl;
	cout << "lenght: " << text.length() << endl;
	cout << "first char: " << text[0] << endl;

	return 0;
}

