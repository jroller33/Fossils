#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Hello. Please enter your first name: ";
	string first_name;
	cin >> first_name;
	
	cout << endl << "Enter your last name: ";
	string last_name;
	cin >> last_name;

	cout << endl << "Enter your middle initial: ";
	char middle_initial;
	cin >> middle_initial;
	
	string name1 = last_name + ", " + first_name;
	
	string name2 = first_name + ' ' + middle_initial + ' ' + last_name;
	
	cout << endl << name1 << endl;
	cout << name2 << endl;
	
	return 0;
}
