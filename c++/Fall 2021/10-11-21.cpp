#include <iostream>
#include <cmath>

using namespace std;

int f(int n)
{
	int result;
	if (n == 0)
		result = 0;

	else
		result = (1 + f(n - 1)) * 2;

	return result;
}

int fibonacci(int n)
{
	int result;
	if (n == 0)
		result = 0;

	else if (n == 1)
		result = 1;

	else
		result = fibonacci(n - 1) + fibonacci(n - 2);

	return result;
}


