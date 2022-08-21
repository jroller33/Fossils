#include <iostream>
using namespace std;

int main()
{
	cout << "Letter Grade Calculator\n\n";
	cout << "Enter the final accumulative grade:\t";
	int final_grade;
	cin >> final_grade;
	char letter_grade;

	if (final_grade >= 90)
			letter_grade = 'A';

	else if (final_grade >= 80)
		letter_grade = 'B';

	else if (final_grade >= 70)
		letter_grade = 'C';

	else if (final_grade >= 60)
		letter_grade = 'D';

	else
		letter_grade = 'F';

	cout << "The student's letter grade is:\t\t" << letter_grade << endl;

	cout << "\nBye!";

	return 0;

}



	/*char choice = 'y';
	while (choice == 'y')
	{
		cout << "Invoice Total Calculator 1.0 \n\n";

		cout << "Enter a subtotal:\t";
		double subtotal;
		cin >> subtotal;
		double discount_percentage;

		if (subtotal > 300)
			discount_percentage = .3;
		else if (subtotal >= 200)
			discount_percentage = .2;
		else if (subtotal >= 100)
			discount_percentage = .1;
		else
			discount_percentage = .05;

		double discount_amount = discount_percentage * subtotal;
		double invoice_total = subtotal - discount_amount;

		cout << "Discount percentage:\t" << discount_percentage << endl;
		cout << "Discount amount:\t" << discount_amount << endl;
		cout << "Invoice total:\t\t" << invoice_total << endl << endl;

		cout << "Do you want to continue? y/n" << endl;
		cin >> choice;
		cout << endl;
	}
	return 0;

}*/