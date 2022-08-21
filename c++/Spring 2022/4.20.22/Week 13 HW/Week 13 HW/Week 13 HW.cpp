#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
#include <limits>
#include <string>
using namespace std;

int main()
{




	char choice = 'y';
	while (choice == 'y' || choice == 'Y')
	{
		double loan_amount, interest_rate, interest_amount;
		cout << "Interest Calculator\n\n"
			<< "Enter loan amount: ";
		cin >> loan_amount;
		cout << "\nEnter interest rate: ";
		cin >> interest_rate;
		interest_amount = loan_amount * (interest_rate / 100);

		cout << endl << loan_amount << endl << interest_rate << endl << interest_amount << endl;

		cout << "Do you want to continue? y/n\n";
		cin >> choice;
	}
	return 0;
}