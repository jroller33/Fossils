#include <iostream>
using namespace std;

int main()
{
	cout << "Elementary Stats Final Grade Calc\n\n";

	while (true)
	{
		double hw_score;
		cout << "Homeword Score\t\t";
		cin >> hw_score;

		cout << "Online Quiz Score:\t";
		double quiz_score;
		cin >> quiz_score;

		cout << "Midterm Review Score:\t";
		double midterm_review;
		cin >> midterm_review;

		cout << "Midterm exam:\t\t";
		double midterm_exam;
		cin >> midterm_exam;

		double final_review;
		cout << "Final exam Review:\t" << final_review << endl;
		cin >> final_review;

		double final_exam;
		cout << "Final Exam:\t\t";
		cin >> final_exam;


		double final_grade = ((hw_score * 0.2) + (quiz_score * 0.3) + (midterm_review * 0.1) + (midterm_exam * 0.15) + (final_review * 0.1) + (final_exam * 0.15));

		cout << "Final grade:\t\t" << final_grade << endl << endl;
	
	}
	return 0;
}