#include <iostream>
using namespace std;

int main()
{
	cout << "Paycheck Calculator\n\n";

	double hours_worked;
	cout << "Hours Worked: \t";
	cin >> hours_worked;

	double pay_rate;
	cout << "Hourly Pay Rate:";
	cin >> pay_rate;

	double tax_rate;
	cout << "Tax Rate:\t";
	cin >> tax_rate;

	double gross_pay = hours_worked * pay_rate;
	double tax_amount = gross_pay * (tax_rate / 100);
	double take_home_pay = gross_pay - tax_amount;

	cout << endl << "Gross Pay:\t" << gross_pay << endl;
	cout << "Tax Rate:\t" << tax_rate << "%" << endl;
	cout << "Tax Amount:\t" << tax_amount << endl;
	cout << "Take Home Pay:\t" << take_home_pay << endl;

	return 0;
}