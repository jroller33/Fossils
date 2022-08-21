#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	int sum = 0;

	cout << "The original value of sum: " << sum << endl << endl;

	do
	{
		sum += i;
		cout << "The " << i << "the exe" << endl
			<< "sum = " << sum << endl << endl;
		++i;
	} while (i < 5);

		cout << "\nThe final result is:" << sum << endl;

	cout << "Bye!" << endl;

	return 0;
}