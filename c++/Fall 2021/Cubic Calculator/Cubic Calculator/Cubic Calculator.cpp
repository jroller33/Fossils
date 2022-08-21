#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//print name of program
	cout << "Cubic Calculator" << endl << endl;

	//get side length from user
	double side_length;
	cout << "Enter the side length of the cubic:   ";
	cin >> side_length;

	//make calculations
	double circumference = side_length * 12;
	double area = 6 * pow(side_length, 2.0);
	double volume = pow(side_length, 3.0);
	
	//show results
	cout<< "Circumference:    " << circumference << endl
		<< "Area:    " << area << endl
		<< "Volume:   " << volume << endl << endl
		<< "See you later!" << endl << endl;

}