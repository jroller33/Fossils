#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true)	// or you could use "for (;;)" instead of while (true)
	{
		string command;
		cout << "Enter a command: ";
		getline(cin, command);

		if (command == "exit")
		{
			break;
		}

		cout << "You entered: " << command << endl << endl;
	}

	cout << "\nBye!\n";

	return 0;
}