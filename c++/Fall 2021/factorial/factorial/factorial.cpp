#include <iostream>
using namespace std;

// Factorial function

int f(int n) {

    if (n <= 1)
        return 1;
    else
        return n * f(n - 1);
}
int main() {
    int num;
    cout << "Enter a whole number: ";
    cin >> num;
    cout << "The factorial of your number is: " << f(num);
    return 0;   
}