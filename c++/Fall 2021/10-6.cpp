#include <iostream>
#include <cmath>

using namespace std;

int add_up(int n)
{
	int result;
	if (n == 1)
	{
		result = 1;
		return result;
	}
	else
	{
		result = add_up(n - 1) + n;
		return result;
	}
}

int multiply_up(int n)
{
	int result;
	if (n == 1)
	{
		result = 1;
		return result;
	}
	else
	{
		result = n * multiply_up(n - 1);
		return result;
	}
}

