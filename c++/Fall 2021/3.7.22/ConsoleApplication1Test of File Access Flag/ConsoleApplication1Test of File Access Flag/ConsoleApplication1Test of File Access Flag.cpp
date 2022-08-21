#include <fstream>
using namespace std;

int main()
{
	ofstream output_file;

	output_file.open("names.txt", ios::app);
	output_file << "Terry";
	output_file.close();

	return 0;
}