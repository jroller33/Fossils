#include <iostream>
using namespace std;

int main()
{
	char choice = 'y';
	while (choice == 'y')
	{
		cout << "Area Calculator\n"
			<< "1. Circle\n"
			<< "2. Square\n"
			<< "3. Rectangle\n\n";

		int menu_item;
		cout << "Menu item: ";
		cin >> menu_item;
		cout << endl;

		double pi = 3.14159;

		double area;
		switch (menu_item)
		{
		case 1:
			cout << "Circle" << endl;

			double radius;
			cout << "Radius: ";
			cin >> radius;

			area = pi * (radius * radius);
			break;

		case 2:
			cout << "Square" << endl;

			double height;
			cout << "Height: ";
			cin >> height;

			area = height * height;
			break;

		case 3:
			cout << "Rectangle" << endl;

			cout << "Height: ";
			cin >> height;

			double width;
			cout << "Width: ";
			cin >> width;

			area = height * width;
			break;

		default:
			cout << "Invalid menu item!\n\n";

		}

		cout << "Area:  " << area << "\n\n";
		cout << "Do you want to continue? (y/n)\n";
		cin >> choice;
	}
	return 0;
}
