#include <iostream>
#include <conio.h>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

bool notCloseApp = false;
string foodAdd = "";
string foodRemove = "";
string DatabaseName = "TheDb.txt";
vector<string> myMenu;

int main()
{
	//ofstream myDbWriter(DatabaseName);
	//ifstream myDbReader(DatabaseName);
	while (!notCloseApp)
	{
		cout << "Menu: \n";

		//show menu
		for (int i = 0; i < myMenu.size(); i++)
		{
			cout << i << " . " << myMenu[i] << "\n";
		}

		switch (_getch())
		{
		case 111: // o (small)
			cout << "Enter new food to adding to menu: ";
			cin >> foodAdd;
			myMenu.push_back(foodAdd);
			break;

		case 100: // d (small)
			cout << "Enter food name to remove form menu: ";
			cin >> foodRemove;
			for (int i = 0; i < myMenu.size(); i++)
			{
				if (myMenu[i] == foodRemove)
				{
					cout << "Food " << foodRemove << " deleted." << system("cls");
					myMenu.erase(myMenu.begin() + i, myMenu.begin() + i + 1);
				}
				else
				{
					cout << "Food not found!" << system("cls");
				}
			}
			break;

		case 27:
			notCloseApp = true;
			return 0;
			break;
		}
		system("cls");
	}
}
