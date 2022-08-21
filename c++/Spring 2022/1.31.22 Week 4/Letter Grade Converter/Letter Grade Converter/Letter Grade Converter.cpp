#include <iostream>
using namespace std;

int main()
{
	cout << "Letter Grade Converter\n\n";

	double number;
	cout << "Enter numerical grade (1-100): ";
	cin >> number;

	if (number < 0)
	{
		cout << "Numerical grade can't be negative.\n\n";
	}
	else if (number > 100)
	{
		cout << "Numerical grade is too large.\n\n";
	}
	else
	{
		char letter;

		if (number > 87)
		{
			letter = 'A';
		}
		else if (number > 79)
		{
			letter = 'B';
		}
		else if (number > 66)
		{
			letter = 'C';
		}
		else if (number > 59)
		{
			letter = 'D';
		}
		else
		{
			letter = 'F';
		}

		cout << "Letter grade: " << letter << "\n\n";
	}

	cout << "Goodbye!";
	
	return 0;
}