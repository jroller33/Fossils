#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	char choice = 'y';
	while (choice == 'y'){

		int selection;

		cout << "God Calculator" << endl << endl
			<< "1. Sum of Two Numbers" << endl
			<< "2. Miles Per Gallon" << endl
			<< "3. Square Root" << endl
			<< "4. Gallons to Liters" << endl
			<< "5. Circle" << endl
			<< "6. Cube" << endl
			<< "7. Fibonacci" << endl
			<< "8. Factorial" << endl << endl
			<< "Please select an option from the list above: " << endl;

		cin >> selection;

		if (selection == 1)
		{
		
				cout << "Please enter 2 numbers: " << endl;

				int sum1;
				int sum2;

				cin >> sum1;
				cin >> sum2;

				int sum3;
				sum3 = sum1 + sum2;

				cout << "The sum of your two numbers is: ";
				cout << sum3 << endl;

				cout << "Do you want to continue? y/n" << endl;
				cin >> choice;
				cout << endl;
		}

		else if (selection == 2)
		{
			
			int mpg();
			{
				cout << "How many miles have you driven? ";
				double miles;
				cin >> miles;

				cout << endl << "How many gallons did you use? ";
				double gallons;
				cin >> gallons;

				double mpg = miles / gallons;

				cout << endl << endl << "Your miles per gallon is: " << mpg << endl << endl;

				cout << "Do you want to continue? y/n" << endl;
				cin >> choice;
				cout << endl << endl;
			}
		}
		else if (selection == 3)
		{
			int sqroot();
			{

				cout << "Please enter a number: ";
				double input1;
				cin >> input1;

				double root1 = sqrt(input1);
				double round1 = round(root1 * 1000) / 1000;

				cout << "The square root is:  " << round1 << endl;

				cout << "Do you want to continue? y/n" << endl;
				cin >> choice;
				cout << endl << endl;
			}
		}

		else if (selection == 4)
		{
			int gallonstoliters();
			{

				cout << "Please enter how many gallons: ";
				double gallons;
				cin >> gallons;

				double liters = gallons * 3.7854;
				double round1 = round(liters * 100) / 100;
				cout << "Liters:	" << round1 << endl << endl;

				cout << "Do you want to continue? y/n" << endl;
				cin >> choice;
				cout << endl << endl;
			}
		}

		/*else if (selection == 5)
		{
		}

		else if (selection == 6)
		{
		}

		else if (selection == 7)
		{
		}

		else if (selection == 8)
		{
		}

		else
		{
		}*/

	}
	return 0;
}