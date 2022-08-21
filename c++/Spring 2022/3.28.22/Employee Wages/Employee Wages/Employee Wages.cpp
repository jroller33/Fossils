#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	ifstream infile;
	infile.open("wages.txt");
	if (infile)
	{
		string line;
		stringstream ss;
		string name;
		double hourly_wage = 0.0;
		double hours = 0.0;
		double wages = 0.0;
		int lines_not_processed = 0;

		cout << fixed << setprecision(2);
		cout << left << setw(15) << "Name" << right << setw(12) << "Hourly wage"
			<< setw(12) << "Hours" << setw(12) << "Total" << endl;
		cout << "-----------------------------------------------------------------" << endl;
		while (getline(infile, line))
		{
			ss.str(line);
			ss.clear();
			if (ss >> name >> hourly_wage >> hours)
			{
				wages = hourly_wage * hours;
				cout << left << setw(15) << name << right << setw(12)
					<< hourly_wage << setw(12) << hours << setw(12) << wages << endl;
			}
			else
			{
				++lines_not_processed;
			}
		}
		infile.close();
		cout << endl << lines_not_processed << " records not processed in the file.\n\n";
	}
	return 0;
}