#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream input_file;
	input_file.open("info.txt");
	if (input_file)
	{
		int num;
		while (true)
		{
			if (input_file >> num)
			{
				cout << num << '|';
			}
			else if (input_file.eof())
			{
				break;
			}
			else if (input_file.fail())
			{
				input_file.clear();
				input_file.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "\nReading failed. Retrying...\n";
			}
		}
		input_file.close();
	}
	return 0;
}