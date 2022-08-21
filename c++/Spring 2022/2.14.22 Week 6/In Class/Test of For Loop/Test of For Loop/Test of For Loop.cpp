#include <iostream>
using namespace std;

int main()
{
	int sum = 0;

	cout << "The original value of sum: " << sum << endl << endl;

	for (int i = 1; i < 5; ++i) // even if there's nothing in the for loop header, still need 2 ;
	{			// better for numeric data than while
		sum += i;
		cout << "The " << i << "-th execution of for loop: " << endl
			<< "sum = " << sum << endl << endl;
	}

	cout << "\nThe final result of sum: " << sum << endl
		<< "The final result of i: " << i << endl;

	return 0;
}