#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Please enter a number: ";
	int input;
	cin >> input;

	double sq_root = sqrt(input);
	double sqrt_round = round(sq_root * 100) / 100;

	cout << "The square root is:  " << sqrt_round << endl << endl;

	return 0;
}
