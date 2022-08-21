#include <iostream>
using namespace std;

// Enter a range of years (starting year and ending year). Output every leap year within that range.


//					THIS CODE DOES NOT WORK. I DON'T KNOW HOW TO DO THIS. 


int main()
{
	int start_year, end_year, year;
	cout << "Enter a starting year:\t";
	cin >> start_year;
	cout << endl << "Enter an end year:\t";
	cin >> end_year;

	year = start_year;
	while ((year >= start_year) && (year <= end_year))
		if (((year % 4 == 0) && !(year % 100 == 0)) || (year % 400 == 0))
			cout << year << endl;
			
		else


	/*for (int i = start_year; start_year <= i <= end_year; ++i)
		if (((((i % 4 == 0) && !(i % 100 == 0)) || (i % 400 == 0))) && (i <= end_year))
			cout << i << endl;
		else
			break;*/

}


// if (((year % 4 == 0) && !(year % 100 == 0)) || (year % 400 == 0))