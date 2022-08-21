#include <fstream>
using namespace std;

int main()
{
	fstream file;

	file.open("names.txt", ios::out);
	file << "terry";
	file.close();

	return 0;

}