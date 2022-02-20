#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string write(){

	ofstream MyFile("./testing/testing.txt"); // otevře souboru
	MyFile << "zapsáno do souboru \nlol \ntřetí line"; // zapíše do souboru
	MyFile.close(); // zavře souboru
	return "----zapsáno!----";

}

void read(){

	string fileText;
	ifstream MyFile("./testing/testing.txt");
	while (getline(MyFile, fileText)){
		cout << fileText << endl;
	}
}

int main() {
	cout << write() << endl;
	read();
	return 0;

}
