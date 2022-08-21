#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cout << "Prime Number Checker\n\n";

	while (true)
	{
		int number;

		while (true)
		{
			cout << "Please enter an integer between 1 and 5000: ";
			cin >> number;

			if (cin.good())
			{
				cin.ignore(numeric_limits<streamsize>::max()), '\n';
				break;
			}
			else if (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max()), '\n';
			}
			else if (cin.bad())
			{
				cout << "Unexpected error!\n";
				return 0;
			}
		}

		vector<int> factors;
		for (int i = 1; i < number + 1; ++i)
		{
			int remainder = number % i;
			if (remainder == 0)
			{
				factors.push_back(i);
			}
		}
		if (factors.size() == 2)
		{
			cout << number << " is a prime number. \n";
		}
		else
		{
			cout << number << " is NOT a prime number.\n";
			cout << "It has " << factors.size() << " factors: ";
			for (int factor : factors)
			{
				cout << factor << " ";
			}
			cout << endl;
		}
		cout << endl;

	}
	cout << "Bye!\n\n";
	return 0;
}