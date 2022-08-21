// this is some random code from insta. 

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank {

		// Private variables used inside class
private:
	string name;
	int accnumber;
	char type[10];
	int amount = 0;
	int tot = 0;

		// Public variables
public:
		// Fuction to set the person's data
	void setvalue()
	{
		cout << "Enter name\n";
		cin.ignore();

		// to use space in string
		getline(cin, name);

		cout << ""
	}
};