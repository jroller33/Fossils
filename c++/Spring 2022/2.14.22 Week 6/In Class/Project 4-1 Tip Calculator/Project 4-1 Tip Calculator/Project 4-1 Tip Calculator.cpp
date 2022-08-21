#include <iostream>
using namespace std;

int main()
{
	cout << "Tip Calculator\n\n";

	double meal_cost;
	cout << "Cost of meal: ";
	cin >> meal_cost;

	cout << endl;
	int tip_percent = 15;
	while (tip_percent <= 25)
	{
		double tip_amount = meal_cost * (tip_percent / 100.0);

		double total = meal_cost + tip_amount;

		cout << tip_percent << "%\n"
			<< "Tip Amount: " << tip_amount << endl
			<< "Total Amount: " << total << endl << endl;

		tip_percent += 5;
	}

	return 0;
}