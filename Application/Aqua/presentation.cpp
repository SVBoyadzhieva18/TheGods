#include "presentation.h"
#include <iostream>
using namespace std;

void showDolphin(DOLPHINS dolphin, DATE date)
{
	cout << endl;
	cout << "Sea station: " << dolphin.seaStation << endl;
	cout << "Dolphin Type: " << dolphin.dolphinType << endl;
	cout << "Chip Number: " << dolphin.chipNumber << endl;
	cout << "From: " << date.day << "/" << date.month << "/" << date.year << endl;
	cout << endl;
}

void showAllDolphins(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	cout << endl;
	cout << "You have entered the following dolphins:" << endl;
	for (int i = 0; i < dolphinsIndex; i++)
	{
		showDolphin(dolphin[i], date[i]);
	}
}

bool showSortMenu(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	cout << endl;
	cout << "Sort Menu" << endl;
	cout << "1 - Sort by alphabetical order (sea station)" << endl;
	cout << "2 - Sort by alphabetical order (dolphin type)" << endl;
	cout << "3 - Go back to the main menu" << endl;
	cout << "Your choice: ";
	int userChoice;
	cin >> userChoice;
	switch (userChoice)
	{
	case 1:
		sortAlphabeticallySeaStations(dolphin, date, dolphinsIndex);
		break;
	case 2:
		sortAlphabeticallyDolphinType(dolphin, date, dolphinsIndex);
		break;
	case 3:
		return false;
	default:
		cout << "Enter a valid number!" << endl;
		showSearchMenu(dolphin, date, dolphinsIndex);
		break;
	}
	return true;
}


bool showSearchMenu(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	cout << endl;
	cout << "Searching Menu" << endl;
	cout << "1 - Search by sea station" << endl;
	cout << "2 - Search by dolphin type" << endl;
	cout << "3 - Search by chip number" << endl;
	cout << "4 - Go back to the main menu" << endl;
	cout << "\nYour choice: ";
	int userChoice;
	cin >> userChoice;
	switch (userChoice)
	{
	case 1:
		searchBySeaStation(dolphin, date, dolphinsIndex);
		break;
	case 2:
		searchByDolphinType(dolphin, date, dolphinsIndex);
		break;
	case 3:
		searchByChipNumber(dolphin, date, dolphinsIndex);
		break;
	case 4:
		return false;
	default:
		cout << "Enter a valid number!" << endl;
		showSearchMenu(dolphin, date, dolphinsIndex);
		break;
	}
	return true;
}

bool showMenu(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	int c;
	cout << "\nMain menu\n\n";
	cout << "1 - Add a dolphin\n";
	cout << "2 - View all dolphins\n";
	cout << "3 - Sort text\n";
	cout << "4 - Search text\n";
	cout << "5 - Quit program\n";
	cout << "Your choice: ";
	cin >> c;

	switch (c)
	{
	case 1:
		addDolphin(dolphin, date, dolphinsIndex);
		break;
	case 2:
		showAllDolphins(dolphin, date, dolphinsIndex);
		break;
	case 3:
	{
		bool doShowSortMenu = true;
		do
		{
			doShowSortMenu = showSortMenu(dolphin, date, dolphinsIndex);
		} while (doShowSortMenu);
		break;
	}
	case 4:
	{
		bool doShowSearchMenu = true;
		do
		{
			doShowSearchMenu = showSearchMenu(dolphin, date, dolphinsIndex);
		} while (doShowSearchMenu);
		break;
	}
	case 5:
		return false;
		break;
	default:
		cout << "Enter a valid number!" << endl;
		showMenu(dolphin, date, dolphinsIndex);
		break;
	}
	return true;
}

void showSeaStationsMenu()
{
	cout << "Stations in The Black Sea" << endl << endl;
	cout << "1 - Bulgaria" << endl;
	cout << "2 - Ukraine" << endl;
	cout << "3 - Russia" << endl;
	cout << "4 - Turkey" << endl;
	cout << "5 - Georgia" << endl;
	cout << "6 - Romania" << endl;
	cout << endl;
}

void showDolphinTypesMenu()
{
	cout << "Types of dolphins in The Black Sea" << endl << endl;
	cout << "1 - Bottlenose dolphin" << endl;
	cout << "2 - Common dolphin" << endl;
	cout << "3 - Harbor porpoises" << endl;
}