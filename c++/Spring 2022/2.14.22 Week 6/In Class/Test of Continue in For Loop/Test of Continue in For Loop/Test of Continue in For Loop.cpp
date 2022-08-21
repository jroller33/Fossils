#include <iostream>
using namespace std;

int main()
{
	int sum = 0;

	cout << "The original value of sum: " << sum << endl << endl;

	for (int i = 1; i < 5; ++i)
	{
		sum += i;

		if (i == 3)
		{
			continue;
		}
	
		cout << "The " << i << "th execution of for loop: " << endl
			<< "sum = " << sum << endl << endl;
	}

	cout << "\nThe final result of sum: " << sum << endl;

	return 0;

}