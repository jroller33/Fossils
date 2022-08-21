#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	std::cout << "Monthly Payment Calculator\n\n";

	double loan_amount;
	while (true)
	{
		cout << "Loan amount: ";
		cin >> loan_amount;

		if (cin.good())
		{
			break;
		}
		else
		{
			if (cin.fail())
			{
				cout << "Invalid number! Please try again.\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else
			{
				if (cin.bad())
				{
					cout << "Sorry, an unexpected error has occurred. Bye!";
					return 0;
				}
			}
		}
	}
	cout << endl;

	int const w = 10;
	cout << fixed;

	cout << left << setw(w / 2) << "Year"; // we need 5 chars (10/2)
	for (double rate = 3.0; rate < 6.0; rate += 0.5)
	{
		cout << setprecision(1);
		cout << right << setw(w - 1) << rate << '%';
	}
	cout << endl;

	for (int year = 15; year <= 30; year += 5)
	{
		cout << left << setw(w / 2) << year;

		for (double rate = 3.0; rate < 6.0; rate += 0.5)
		{
			int months = year * 12;
			double monthly_rate = rate / 12 / 100;
			
			double monthly_payment = loan_amount * monthly_rate /
				(1 - 1 / pow((1 + monthly_rate), months));

			cout << setprecision(2);
			cout << right << setw(w) << monthly_payment;
		}

		cout << endl;
	}

	cout << endl << "Bye!\n\n";

	return 0;
}
