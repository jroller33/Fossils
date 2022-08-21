#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream input_file;				// read data

	input_file.open("name.txt");		// ofstream will create a file if it doesn't exist,
										// but ifstream won't.
	if (input_file)
	{
		string line;
		while (getline(input_file, line)) // instead of cin as 1st parameter for getline, we use input_file. 2nd param. is var to store
		{
			cout << line << '\n';
		}

		input_file.close();				// don't forget to close file
	}
	return 0;
}