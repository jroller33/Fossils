#include <iostream>
using namespace std;

int main()
{
	char choice = 'y';

	while (choice == 'y')
	{
		cout << "Press y to continue, press other keys to quit: ";
		cin >> choice;
	}

	cout << "Bye!" << endl;

	return 0;
}