#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Hypotenuse Calculator\n\n";

	double sideA;
	cout << "Side A: ";
	cin >> sideA;

	double sideB;
	cout << "Side B: ";
	cin >> sideB;

	double sideC = sqrt(sideA * sideA + sideB * sideB);

	cout << "Side C: " << sideC << endl << endl;

	return 0;
}