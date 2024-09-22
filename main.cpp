#include "main.h"

int main()
{
	for (auto& CheckFile : std::filesystem::directory_iterator(FileExtenstion))
	{
		cout << "There is a file called " << CheckFile;
	}
	//DatabaseWriter.open(FileExtenstion);
	

	while (!notCloseApp)
	{
		system("cls");
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 6);
		cout << "~~~~~~~~~~~~~~~~~~~~~~{{| Resturant menu -> Food Section |}}~~~~~~~~~~~~~~~~~~~~~~~~";
		SetConsoleTextAttribute(hConsole, 10);
		cout << "\n\t Tip: to add food and price press (o) and to delete press (d)";

		SetConsoleTextAttribute(hConsole, 7);
		cout << "\n\n\t\t\t\tMenu: \n";
		
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

		case 27: // esc key
			notCloseApp = true;
			break;
		}
	}

	system("pause");
	return 0;
}