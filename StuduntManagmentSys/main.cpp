#include "main.h"
using namespace std;

void School::teacher::AddToDb()
{
	teacher teacher;
	cout << "Enter Teacher identity: \n";

	for (int i = 0; i < 8;i++)
	{
		teacher.t_id = rand() % 10;
		cout << teacher.t_id;
	}
	cin >> teacher.t_name;
}

int main()
{
	int ch;
	bool done = false;
	School::teacher teacher;
	cout << "Please select from 1 ~ 9: " << endl;
	cout << " 1 - add a Teacher \n 2 - remove a Teacher \n 3 - add a Student \n 4 - remove a Studnet \n 5 - Exit" << endl;
	cout << " Enter the number: ";
	cin >> ch;

	while (!done)
	{
		switch (ch)
		{
		case 1:
			teacher.AddToDb();
			system("cls");
			break;
		default:
			cout << "Error! Enter Currect Value!";
			return 0;
			break;
		}
	}
	system("pause");
}
