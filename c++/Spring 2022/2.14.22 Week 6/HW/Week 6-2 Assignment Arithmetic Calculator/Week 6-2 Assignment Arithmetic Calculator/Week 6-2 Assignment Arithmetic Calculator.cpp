#include <iostream>
using namespace std;

int main()
{
	char operator_1;
	double result = 0;
	double operand_1, operand_2;

	cout << "Arithmetic Calculator\n\n"
		<< "Enter an operator (+, -, *, /): ";
	cin >> operator_1;

	switch (operator_1)
	{
	case '+':
		cout << "Enter operand 1: ";
		cin >> operand_1;
		cout << "Enter operand 2: ";
		cin >> operand_2;

		result = operand_1 + operand_2;
		cout << "Result: " << result << "\n\nBye!";
		break;

	case '-':
		cout << "Enter operand 1: ";
		cin >> operand_1;
		cout << "Enter operand 2: ";
		cin >> operand_2;

		result = operand_1 - operand_2;
		cout << "Result: " << result << "\n\nBye!";
		break;

	case '*':
		cout << "Enter operand 1: ";
		cin >> operand_1;
		cout << "Enter operand 2: ";
		cin >> operand_2;
		
		result = operand_1 * operand_2;
		cout << "Result: " << result << "\n\nBye!";
		break;

	case '/':
		cout << "Enter operand 1: ";
		cin >> operand_1;
		cout << "Enter operand 2: ";
		cin >> operand_2;
		
		result = operand_1 / operand_2;
		cout << "Result: " << result << "\n\nBye!";
		break;

	default:
		cout << "Invalid operator!\n\n"
			<< "Bye!\n";
		break;
	}
	return 0;
}
