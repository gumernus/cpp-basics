#include <iostream>
#include <string>

using namespace std;

class MyClass {
	private:
		int secret = 0;

	public:
		string text;
		int number;

		MyClass(string x, int y){ // constructor
			text = x;
			number = y;
		}

		void print(){ // function to print values
			cout << "text: " << text << endl << "num: " << number << endl;
		}

		void setSecret(int x){
			secret = x;
		}

		int getSecret(){
				return secret;
		}

};

int main(){
	MyClass myObj2("objekt", 2); // objekt 2
	myObj2.print();
	myObj2.setSecret(666); // set secret "má default 0"
	cout << myObj2.getSecret() << endl; // ukázat secret

return 0;
}
