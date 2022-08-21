#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Tip Calculator\n\n";
	double meal_cost;
	cout << "Cost of meal: ";
	cin >> meal_cost;
	cout << endl;

	for (double tip = 15; tip <= 25; tip += 5)
	{
		double tip_amount = meal_cost * (tip / 100);
		double total_amount = meal_cost + tip_amount;
		double round_tip_amount = round(tip_amount * 100) / 100;		// Need to round these to 2 decimal places
		double round_total_amount = round(total_amount * 100) / 100;

		cout << tip << "%\n"
			<< "Tip amount:\t" << round_tip_amount
			<< "\nTotal amount:\t" << round_total_amount << endl << endl;
	}
	return 0;
}