//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//	Input: Month number, Output: Name of month, number of days in month (including leap years)
//	uses multiple switch statements incl nested if statements.
//
//*/
//int main()
//{
//	cout << "Month Selector\n\n";
//	char choice = 'y';
//	while (choice == 'y')
//	{
//		int year;
//		cout << "Enter year:\t\t";
//		cin >> year;
//
//		int number;
//		cout << "Enter month (1-12):\t";
//		cin >> number;
//
//		string name;
//		switch (number)
//		{
//		case 1:
//			name = "January";
//			break;
//
//		case 2:
//			name = "February";
//			break;
//
//		case 3:
//			name = "March";
//			break;
//
//		case 4:
//			name = "April";
//			break;
//
//		case 5:
//			name = "May";
//			break;
//
//		case 6:
//			name = "June";
//			break;
//
//		case 7:
//			name = "July";
//			break;
//
//		case 8:
//			name = "August";
//			break;
//
//		case 9:
//			name = "September";
//			break;
//
//		case 10:
//			name = "October";
//			break;
//
//		case 11:
//			name = "November";
//			break;
//
//		case 12:
//			name = "December";
//			break;
//
//		default:
//			name = "Invalid month number";
//			break;
//		}
//
//		cout << "Month name:		" << name << endl;
//
//		int days;
//		switch (number)
//		{
//		case 1:											// these months have 31 days
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			days = 31;
//			break;
//		case 4:											// these months have 30 days
//		case 6:
//		case 9:
//		case 11:
//			days = 30;
//			break;
//		case 2:
//			if (((year % 4 == 0) && !(year % 100 == 0)) || (year % 400 == 0))	// calc if feb is in a leap year
//			{
//				days = 29;
//			}
//			else
//			{
//				days = 28;
//			}
//			break;
//
//		default:
//			days = 0;
//			break;
//		}
//
//		cout << "Days in month:\t\t" << days << endl << endl;
//
//		cout << "Do you want to continue? (y/n)\n";
//		cin >> choice;
//		cout << endl;
//	}
//	cout << "Bye!\n\n";
//
//	return 0;
//}