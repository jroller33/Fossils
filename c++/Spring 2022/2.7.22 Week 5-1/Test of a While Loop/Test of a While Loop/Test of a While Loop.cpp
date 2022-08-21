#include <iostream>
using namespace std;

int main()
{
	int i =	1;
	int sum = 0;

	cout << "The original value of sum: " << sum << endl << endl;

	while (i < 5)
	{
		sum += i;
		cout << "The " << i << "-th execution of while loop: " << endl
			<< "sum = " << sum << endl << endl;
		++i;
	}
	
	cout << "\nThe final result of sum: " << sum << endl
		<< "The final result of i: " << i << endl;

	return 0;
}