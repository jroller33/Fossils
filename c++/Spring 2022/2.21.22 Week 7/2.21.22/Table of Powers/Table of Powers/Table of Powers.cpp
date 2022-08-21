#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Table of Powers\n\n";

	int start;
	int stop;
	while (true)
	{
		cout << "Enter start number: ";
		cin >> start;
		
		cout << "Enter stop number: ";
		cin >> stop;
		cout << endl;

		if (start > stop)
		{
			cout << "Start number must be less than stop number.\n"
				<< "Please try again.\n\n";
			continue;
		}
		else
		{
			break;
		}
	}

	cout << "Number\tSquared\tCubed\n"
		<< "=======\t=======\t=====\n";

	for (int num = start; num <= stop; ++num)
	{
		int square = pow(num, 2);
		int cube = pow(num, 3);
		cout << num << "\t" << square << "\t" << cube << "\n";
	}
	cout << endl;

	return 0;
}