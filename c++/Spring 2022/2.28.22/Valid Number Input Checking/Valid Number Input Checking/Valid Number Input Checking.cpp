#include <iostream>
#include <limits>
using namespace std;

int main()
{
	double num;
	while (true)
	{
		cout << "Enter a number (1-100): ";
		cin >> num;

		if (cin.fail())
		{
			cout << "That's not a valid number. Try again. \n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore as many as possible until endline char
			continue;
		}

		if (num < 1)
		{
			cout << "Number must be greater than 0. Try again.\n";
		}
		else
		{
			if (num > 100)
			{
				cout << "Number must be 100 or less. Try again.\n";
			}
			else
			{
				break;
			}
		}
	}

	cout << "Your number is " << num << endl;

	return 0;
}