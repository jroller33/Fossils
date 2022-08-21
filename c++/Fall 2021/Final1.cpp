#include <iostream>
using namespace std;

int main()
{
	cout << "Final Grade Calculator\n\n";
	
	cout << "Please enter a blind typing score (maximum point is 685):\t";
	double blind_typing_score;
	cin >> blind_typing_score;
	if (blind_typing_score > 685 || blind_typing_score < 0)
		cout << "Please enter a score between 0 and 685." << endl;

	cout << "Please enter a blind typing exam score (maximum point is 100):\t";
	double blind_typing_exam;
	cin >> blind_typing_exam;
	if (blind_typing_exam > 100 || blind_typing_exam < 0)
		cout << "Please enter a score between 0 and 100." << endl;

	cout << "Please enter an assignment score (Maximum point is 165):\t";
	double assignment_score;
	cin >> assignment_score;
	if (assignment_score > 165 || assignment_score < 0)
		cout << "Please enter a score between 0 and 165." << endl;

	cout << "Please enter a final exam score (Maximum point is 100):\t\t";
	double final_exam_score;
	cin >> final_exam_score;
	cout << endl;
	if (final_exam_score > 100 || final_exam_score < 0)
		cout << "Please enter a score between 0 and 100." << endl;
	
	double final_grade = 100 * (((blind_typing_score / 685 ) * 0.15) + ((blind_typing_exam / 100) * 0.1) + ((assignment_score / 165) * 0.25) + ((final_exam_score / 100) * 0.5));

	if (final_grade >= 90)
	{
		cout << "The final grade is: " << final_grade << endl;
		cout << "The letter grade is: A" << endl;
	}
	else if (final_grade >= 85)
	{
		cout << "The final grade is: " << final_grade << endl;
		cout << "The letter grade is: B+" << endl;
	}
	else if (final_grade >= 80)
	{
		cout << "The final grade is: " << final_grade << endl;
		cout << "The letter grade is: B" << endl;
	}
	else if (final_grade >= 75)
	{
		cout << "The final grade is: " << final_grade << endl;
		cout << "The letter grade is: C+" << endl;
	}
	else if (final_grade >= 70)
	{
		cout << "The final grade is: " << final_grade << endl;
		cout << "The letter grade is: C" << endl;
	}
	else if (final_grade >= 60)
	{
		cout << "The final grade is: " << final_grade << endl;
		cout << "The letter grade is: D" << endl;
	}
	else
	{
		cout << "The final grade is: " << final_grade << endl;
		cout << "The letter grade is: F" << endl;
	}

	cout << "Bye!";

	return 0;
}