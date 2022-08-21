#include <iostream>
using namespace std;

int main()
{
	char choice = 'y';

	while (choice == 'y')
	{
		int number;
		cout << "Enter a number: ";
		cin >> number;

		if (number <= 0)
		{
			cout << "Number must be greater than 0. "
				<< "Try again. \n\n";
			continue;
		}

		cout << "You entered: " << number << endl << endl;
		cout << "Press y to continue, press others to quit: ";
		cin >> choice;
		cout << endl;
	}
	cout << "Bye!";

	return 0;
}