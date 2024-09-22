#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
#include <filesystem>
#include <vector>

#include <Windows.h>

using namespace std;

bool notCloseApp = false;
string foodAdd = "";
string foodRemove = "";
string FileExtenstion = "Database.DontTouch.dtbs";
vector<string> myMenu;

ofstream(DatabaseWriter);
ifstream(DatabaseReader);
