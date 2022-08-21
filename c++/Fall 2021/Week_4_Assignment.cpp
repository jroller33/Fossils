#include <iostream>
using namespace std;

int main()
{
	cout << "===============================================================\n"
		<< "Shipping Calculator\n"
		<< "===============================================================\n";

	double cost;
	cout << "Cost of items ordered: ";
	cin >> cost;

	if (cost < 0)
	{
		cout << "You must enter a postitive number.\n\n"
			<< "Bye!\n";
	}
	else
	{
		double shipping_cost;
		double total_cost;

		if (cost > 75.0)
		{
			shipping_cost = 0.0;
		}
		else if (cost > 50)
		{
			shipping_cost = 9.95;
		}
		else if (cost > 30)
		{
			shipping_cost = 7.95;
		}
		else
		{
			shipping_cost = 5.95;
		}

		total_cost = cost + shipping_cost;

		cout << "Shipping cost:\t" << shipping_cost << endl
			<< "Total cost:\t" << total_cost << endl << endl
			<< "Bye!\n";

	}
	return 0;
}