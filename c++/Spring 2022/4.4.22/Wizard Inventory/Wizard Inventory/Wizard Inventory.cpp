#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <limits>
#include <string>
#include <cstdlib>		// need c standard lib for pseudorandom fn. (to pick item from list)
#include <ctime>		// related to pseudorandom fn. need current time for it.
using namespace std;

int main()
{
	srand(time(nullptr));	//srand = pseudorandom fn. needs a seed

	string const filename_items = "wizard_all_items.txt";
	string const filename_inventory = "wizard_inventory.txt";

	vector<string> items;
	ifstream input_file;
	input_file.open(filename_items);
	if (input_file)
	{
		string line;
		while (getline(input_file, line))
		{
			items.push_back(line);
		}
		input_file.close();
	}
	else
	{
		cout << "ERROR! Items file not found.\n";
	}
	vector<string> inventory;
	input_file.open(filename_inventory);
	if (input_file)
	{
		string line;
		while (getline(input_file, line))
		{
			inventory.push_back(line);
		}
		input_file.close();
	}
	else
	{
		cout << "Error! Inventory file not found.\n";
	}
	cout << "Wizard Inventory\n\n";

	cout << "COMMAND MENU\n"
		<< "walk - Walk down the path\n"
		<< "show - Show all items\n"
		<< "drop - Drop an item\n"
		<< "exit - Exit program\n";

	string command = "";
	while (command != "exit")
	{
		cout << endl << "Command: ";
		cin >> command;

		if (command == "walk")
		{
			int index = rand() % items.size();	// divide random num by size of items. the remainder will be index
			string item = items[index];

			cout << "While walking down the path, you see " + item + ".\n";

			char choice;
			
			while (true)
			{
				cout << "Do you want to grab it? (y/n): ";
				cin >> choice;

				if (choice == 'y' || choice == 'Y')
				{
					if (inventory.size() >= 4)
					{
						cout << "You can't carry any more items. "
							<< "Drop something first. \n";
					}
					else
					{
						inventory.push_back(item);
						cout << "You picked up " + item + ".\n";
					}

					break;

				}
				else
				{
					if (choice == 'n' || choice == 'N')
					{
						break;
					}
					else
					{
						cout << "Invalid answer!\n";
					}
				}
			}

		}
		else if (command == "show")
		{
			int num = 0;
			for (string item : inventory)
			{
				cout << ++num << ". " << item << endl;
			}
		}
		else if (command == "drop")
		{
			int dropnum = 0;
			for (string item : inventory)
			{
				cout << ++dropnum << ". " << item << endl;
			}
			int number;
			cout << "Number: ";
			cin >> number;

			if (number < 1 || number > inventory.size())
			{
				cout << "Invalid item number.\n";
			}
			else
			{
				int index = number - 1;
				string item = inventory[index];
				inventory.erase(inventory.begin() + index);
				cout << "You dropped " + item + ".\n";
			}
		}
		else if (command == "exit")
		{
			cout << "Bye!\n\n";
			break;
		}
		else
		{
			cout << "Invalid command. Try it again!\n";
		}
	}

	ofstream output_file;

	output_file.open(filename_inventory);
	if (output_file)
	{
		for (string line : inventory)
		{
			output_file << line << "\n";
		}
		output_file.close();
	}
	else
	{
		cout << "ERROR! Inventory File not found!\n";
	}

	return 0;
}