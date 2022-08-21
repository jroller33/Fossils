#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Tip Calculator\n\n";

	double meal_cost;
	cout << "Cost of meal: ";
	cin >> meal_cost;

	double tip_percent;
	cout << "Tip Percent: ";
	cin >> tip_percent;

	double tip_amount = meal_cost * (tip_percent / 100);	
	double total_amount = meal_cost + tip_amount;
	double round_tip_amount = round(tip_amount * 100) / 100;		// round the tip amount and total amount
	double round_total_amount = round(total_amount * 100) / 100;	// to two decimals


	cout << "Tip amount: " << round_tip_amount << endl;
	cout << "Total amount: " << round_total_amount << endl;

	return 0;
}