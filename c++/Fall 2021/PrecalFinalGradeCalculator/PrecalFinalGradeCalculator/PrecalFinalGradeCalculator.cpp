#include <iostream>
using namespace std;

int main()
{
	cout << "\n\n";

	char choice = 'y';
	while (choice == 'y')
	{
		double hw_avg = 108.01;
		double test_avg = 94.81;
		double final_exam;
		double final_grade;
		
		cout << "Final Homework Score:\t" << hw_avg << endl;
		cout << "Final Test Average:\t" << test_avg << endl;
		cout << "Enter Final Exam Score:\t";
		cin >> final_exam;
		final_grade = (hw_avg * 0.4) + (test_avg * 0.4) + (final_exam * 0.2);

		cout << "Final grade is:\t\t" << final_grade << endl << endl;

		cout << endl;
	}
	return 0;
}
// There used to be a more complex version of this calculator to play around and see what would happen with certain scores. 
// At this point the final is only 2 days away so most scores have been hard-coded since they're already determined. 
// The only remaining score that can change is final_exam
// also i broke the while loop bc i got tired of having to keep entering 'y' to continue