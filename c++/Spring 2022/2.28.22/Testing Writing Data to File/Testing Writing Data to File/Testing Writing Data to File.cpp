#include <fstream>
using namespace std;		// no need for iostream

int main()
{
	ofstream output_file;

	output_file.open("name.txt"); // creates new file

	output_file << "Grace\n";	// write "Grace" to the file
	output_file << "Ada\n";
	output_file << "Alan\n";

	output_file.close();	// break connection btw object and file

	return 0;
}