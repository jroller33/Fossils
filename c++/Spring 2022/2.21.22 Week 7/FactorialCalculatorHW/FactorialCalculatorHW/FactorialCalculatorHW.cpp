#include <iostream>
using namespace std;

int main()
{
    cout << "Factorial Calculator\n\n";

    char choice = 'y';
    while (choice == 'y')
    {
        int i, number, factorial = 1;
        cout << "Enter an integer (1-10): ";
        cin >> number;

        for (i = 1; i <= number; ++i)
        {
            factorial *= i;
        }
        cout << "The factorial of " << number << " is " << factorial << ".\n\n"
            << "Continue? (y/n): ";
        cin >> choice;
    }
    cout << "\nBye!";

    return 0;
}