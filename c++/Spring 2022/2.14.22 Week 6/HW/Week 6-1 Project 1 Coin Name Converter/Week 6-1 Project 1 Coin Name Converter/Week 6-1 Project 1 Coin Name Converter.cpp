#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Coin Name Converter\n\n";

	int cents;
	cout << "Enter the value of a coin (in cents): ";
	cin >> cents;

	string coin_name;
	
	switch (cents)
	{
	case 1:
		coin_name = "penny";
		cout << "Name of this coin: " << coin_name
			<< "\n\nBye!";
		break;

	case 5:
		coin_name = "nickel";
		cout << "Name of this coin: " << coin_name
			<< "\n\nBye!";
		break;

	case 10:
		coin_name = "dime";
		cout << "Name of this coin: " << coin_name
			<< "\n\nBye!";
		break;

	case 25:
		coin_name = "quarter";
		cout << "Name of this coin: " << coin_name
			<< "\n\nBye!";
		break;

	case 50:
		coin_name = "half dollar";
		cout << "Name of this coin: " << coin_name
			<< "\n\nBye!";
		break;

	default:
		cout << "There is no value in coins!\n\n"
			<< "Bye!";
		break;
	}
	return 0;
}