#include <iostream>
using namespace std;

int main()
{
	cout << "Change Calculator\n\n";

	char choice = 'y';
	while (choice == 'y')
	{
		int cents;
		cout << "Enter number of cents (0-99): ";
		cin >> cents;
		cout << endl;

		int quarters = cents / 25;
		cents = cents % 25;

		int dimes = cents / 10;
		cents = cents % 10;

		int nickels = cents / 5;
		cents = cents % 5;

		int pennies = cents;

		cout << "Quarters: " << quarters << endl
			<< "Dimes:    " << dimes << endl
			<< "Nickels:  " << nickels << endl
			<< "Pennies:  " << pennies << endl << endl
			<< "Press y to continue, press others to quit: ";
		cin >> choice;
		cout << endl;
	}
	cout << "Bye!";

	return 0;
}