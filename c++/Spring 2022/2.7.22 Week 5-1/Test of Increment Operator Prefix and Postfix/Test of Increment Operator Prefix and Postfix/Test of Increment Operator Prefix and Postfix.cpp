#include <iostream>
using namespace std;

int main()
{
	int x = 14;
	int y = 14;
	int result_x;
	int result_y;
	
	result_x = ++x;			// increment before variable
	result_y = y++;			// increment after variable

	cout << "The value of x: " << x << endl
		<< "The value of result_x: " << result_x << endl << endl // result = 15
		<< "The value of y: " << y << endl
		<< "The value of result_y: " << result_y << endl << endl; // result = 14

	cout << "Bye!\n\n";

	return 0;
}