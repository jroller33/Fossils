#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	cout << "Product List\n\n";
	
	string in_filename = "products.txt";
	string out_filename = "product_list.txt";
	
	ifstream in_file;
	in_file.open(in_filename);
	if (in_file)
	{
		cout << "Reading product data from " << in_filename << " file.\n";

		ofstream out_file;
		out_file.open(out_filename);
		cout << "Writing product data to " << out_filename << " file.\n\n";
		
		out_file << "CURRENT PRODUCT LIST\n"
			<< "==============================================================\n"
			<< "                              discount     discount       your\n"
			<< "code           price           percent       amount      price\n"
			<< "==============================================================\n";

		out_file << fixed;

		string code;
		double price;
		double disc_pct;
		double disc_amt;
		double your_price;
		int const col = 10;
		while (true)
		{
			if (in_file >> code && in_file >> price && in_file >> disc_pct)
			{
				disc_amt = price * disc_pct;
				your_price = price - disc_amt;
				out_file << left << setw(col) << code;
				out_file << right << setw(col) << setprecision(2) << price;
				out_file << right << setw(col) << setprecision(0) << disc_pct * 100;
				out_file << right << setw(2 * col) << setprecision(2) << disc_amt;
				out_file << right << setw(1.5 * col) << setprecision(2) << your_price << endl;

			}
			else
			{
				if (in_file.eof())
				{
					break;
				}
				else
				{
					if (in_file.fail())
					{
						in_file.clear();
						in_file.ignore(numeric_limits<streamsize>::max(), '\n');	// clear buffer
					}
				}
			}

		}
		in_file.close();
		out_file.close();
	}
	else
	{
		cout << "Could not find input filenamed " << in_filename << ".\n\n";
	}
	cout << "Bye!\n\n";

	return 0;
}

// how to amke sure file was opened and read successfully
//line 16

// if (in_file) {
// cout << "Reading file successfule"
// else
// cout << "failed"