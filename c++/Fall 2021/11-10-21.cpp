#include <iostream>
#include <cmath>

using namespace std;

double calculate_mpg(double miles, double gallons)
{
	double result;
	result = miles / gallons;
	return result;
}
int main()
{
	cout << "How many miles have you driven? ";
	double miles;
	cin >> miles;

	cout << endl << endl << "How many gallons did you use? ";
	double gallons;
	cin >> gallons;

	cout << endl << endl << "Your miles per gallon is: ";
	cout << calculate_mpg(miles, gallons);

	cout << endl << endl;

	return 0;

}