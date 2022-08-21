#include <iostream>
using namespace std;

	//cout << "Final Grade Calculator\n\n";

	//char choice = 'y';
	//while (choice == 'y')
	//{
	//	double hw_avg = 108.01;
	//	double test_avg = 94.81;
	//	double final_exam;
	//	double final_grade;

	//	cout << "Final Homework Score:\t" << hw_avg << endl;
	//	cout << "Final Test Average:\t" << test_avg << endl;
	//	cout << "Enter Final Exam Score:\t";
	//	cin >> final_exam;
	//	final_grade = (hw_avg * 0.4) + (test_avg * 0.4) + (final_exam * 0.2);

	//	cout << "Final grade is:\t\t" << final_grade << endl << endl;

int main()
{
	cout << "\n\n";
	char choice = 'y';
	while (choice == 'y')
	{
		cout << "Please enter a Lab and Project Score:\t";
		double lab_score;
		cin >> lab_score;
		/*
		if (blind_typing_score > 685 || blind_typing_score < 0)
			cout << "Please enter a score between 0 and 685." << endl;*/

		cout << "Please enter a blind typing exam score (maximum point is 100):\t";
		double assignments;
		cin >> assignments;
		/*if (blind_typing_exam > 100 || blind_typing_exam < 0)
			cout << "Please enter a score between 0 and 100." << endl;*/

		cout << "Please enter an assignment score (Maximum point is 165):\t";
		double assignment_score;
		cin >> assignment_score;
		/*if (assignment_score > 165 || assignment_score < 0)
			cout << "Please enter a score between 0 and 165." << endl;*/

		cout << "Please enter a final exam score (Maximum point is 100):\t\t";
		double final_exam_score;
		cin >> final_exam_score;
		cout << endl;
		/*if (final_exam_score > 100 || final_exam_score < 0)
			cout << "Please enter a score between 0 and 100." << endl;*/

		double final_grade = 100 * (((lab_score / 685) * 0.15) + ((assignments / 100) * 0.1) + ((assignment_score / 165) * 0.25) + ((final_exam_score / 100) * 0.5));

		cout << "Do you want to continue? y/n" << endl;
		cin >> choice;
		cout << endl;
	}
		cout << "Bye!";

		return 0;
}