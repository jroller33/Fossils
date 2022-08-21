#include <iostream>
#include <iomanip>
#include <fstream>
#include <limits>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string filename = "monthly_sales.txt";			// store the filename in var

	cout << "Monthly Sales\n\n";
	cout << "COMMAND MENU\n"
		<< "m - View monthly sales\n"
		<< "y - View yearly summary\n"
		<< "x - Exit program\n";

	char command = ' ';
	while (command != 'x') 
	{
		cout << endl;
		cout << "Command: ";
		cin >> command;
		cout << endl;

		if (command == 'm') 
		{
			cout << "MONTHLY SALES\n";
			ifstream input_file;
			input_file.open(filename);							// var containing filename
			if (input_file) 
			{
				string month;
				double sales;
				cout << fixed << setprecision(2);			// 2 dec places
				while (input_file >> month >> sales)
				{
					cout << left << setw(5) << month
						<< right << setw(14) << sales << '\n';
				}
				input_file.close();
			}

		}
		else 
		{
			if (command == 'y') 
			{
				cout << "YEARLY SUMMARY\n";
				ifstream input_file;
				input_file.open(filename);
				if (input_file)
				{
					string month;
					double sales;
					double total = 0;
					while (input_file >> month >> sales)
					{
						total += sales;
					}
					input_file.close();

					double average = total / 12;
					cout << fixed << setprecision(2)
						<< left << setw(18) << "Yearly total: "
						<< right << setw(14) << total << '\n'
						<< left << setw(18) << "Monthly average: "
						<< right << setw(14) << average << '\n';
				}
			}
			else
			{
				if (command == 'x')
				{
					cout << "Bye!\n\n";
				}
				else
				{
					cout << "Invalid command. Try again.\n";
				}
			}
		}
	}

	return 0;
}