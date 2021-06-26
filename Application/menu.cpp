#include <iostream>
#include <string>
using namespace std;

struct DATE
{
    int day;
    int month;
    int year;
};

struct DOLPHINS
{
    string seaStation;
    string dolphinType;
    int chipNumber;
};

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

void addDolphin(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	showSeaStationsMenu();
	cout << endl;
	cout << "Sea station: ";
	int userSeaStation;
	cin >> userSeaStation;
	switch (userSeaStation)
	{
	case 1:
		dolphin[dolphinsIndex].seaStation = "Bulgaria";
		break;
	case 2:
		dolphin[dolphinsIndex].seaStation = "Ukraine";
		break;
	case 3:
		dolphin[dolphinsIndex].seaStation = "Russia";
		break;
	case 4:
		dolphin[dolphinsIndex].seaStation = "Turkey";
		break;
	case 5:
		dolphin[dolphinsIndex].seaStation = "Georgia";
		break;
	case 6:
		dolphin[dolphinsIndex].seaStation = "Romania";
		break;
	}

	cin.ignore();

	int userDolphinType;
	showDolphinTypesMenu();
	cout << "Dolphin type: ";
	cin >> userDolphinType;
	switch (userDolphinType)
	{
	case 1:
		dolphin[dolphinsIndex].dolphinType = "Bottlenose dolphin";
		break;
	case 2:
		dolphin[dolphinsIndex].dolphinType = "Common dolphin";
		break;
	case 3:
		dolphin[dolphinsIndex].dolphinType = "Harbor porpoises";
		break;
	}

	cout << "Chip Number: ";
	cin >> dolphin[dolphinsIndex].chipNumber;

	cout << "What date is today?" << endl;
	cout << "    Day: ";
	cin >> date[dolphinsIndex].day;
	cout << "    Month: ";
	cin >> date[dolphinsIndex].month;
	cout << "    Year: ";
	cin >> date[dolphinsIndex].year;

	dolphinsIndex++;
	cout << endl;
}


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

void sortAlphabeticallySeaStations(DOLPHINS* dolphin, DATE* date, int& dolphinIndex)
{
	int count = 0;
	bool swap = true;
	string temp;
	while (swap)
	{
		swap = false;
		count++;
		for (int i = 0; i < dolphinIndex - count; i++)
		{
			if (dolphin[i].seaStation > dolphin[i + 1].seaStation)
			{
				temp = dolphin[i].seaStation;
				dolphin[i].seaStation = dolphin[i + 1].seaStation;
				dolphin[i + 1].seaStation = temp;
				swap = true;
			}
		}
	}
	for (int i = 0; i < dolphinIndex; i++)
	{
		showDolphin(dolphin[i], date[i]);
	}
	cout << endl << endl;
}

void sortAlphabeticallyDolphinType(DOLPHINS* dolphin, DATE* date, int& dolphinIndex)
{
	int count = 0;
	bool swap = true;
	string temp;
	while (swap)
	{
		swap = false;
		count++;
		for (int i = 0; i < dolphinIndex - count; i++)
		{
			if (dolphin[i].dolphinType > dolphin[i + 1].dolphinType)
			{
				temp = dolphin[i].dolphinType;
				dolphin[i].dolphinType = dolphin[i + 1].dolphinType;
				dolphin[i + 1].dolphinType = temp;
				swap = true;
			}
		}
	}
	for (int i = 0; i < dolphinIndex; i++)
	{
		showDolphin(dolphin[i], date[i]);
	}
	cout << endl << endl;
}

void sortByDate(DOLPHINS* dolphin, DATE* date, int& dolphinIndex)
{
	int count = 0;
	bool ifSwapped = true;
	int temp;
	while (ifSwapped)
	{
		ifSwapped = false;
		count++;
		for (int i = 0; i < dolphinIndex - count; i++)
		{
			if (date[i].year != date[i + 1].year)
			{
				if (date[i].year < date[i + 1].year)
				{
					swap(date[i], date[i + 1]);
					ifSwapped = true;
				}

			}
			else
			{
				if (date[i].month != date[i + 1].month)
				{
					if (date[i].month < date[i + 1].month)
					{
						swap(date[i], date[i + 1]);
						ifSwapped = true;
					}
				}
				else
				{
					if (date[i].day < date[i + 1].day)
					{
						swap(date[i], date[i + 1]);
						ifSwapped = true;
					}
				}
			}
		}
	}
	for (int i = 0; i < dolphinIndex; i++)
	{
		showDolphin(dolphin[i], date[i]);
	}
	cout << endl;
	cout << endl;
}

void searchBySeaStation(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	showSeaStationsMenu();
	cout << endl;
	cout << "Sea station: ";
	int userChoice;
	string userSeaStation;
	cin >> userChoice;
	switch (userChoice)
	{
	case 1:
		userSeaStation = "Bulgaria";
		break;
	case 2:
		userSeaStation = "Ukraine";
		break;
	case 3:
		userSeaStation = "Russia";
		break;
	case 4:
		userSeaStation = "Turkey";
		break;
	case 5:
		userSeaStation = "Georgia";
		break;
	case 6:
		userSeaStation = "Romania";
		break;
	}
	for (int i = 0; i < dolphinsIndex; i++)
	{
		if (dolphin[i].seaStation == userSeaStation)
		{
			showDolphin(dolphin[i], date[i]);
		}
	}
}

bool showSortMenu(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	cout << endl;
	cout << "Sort Menu" << endl;
	cout << "1 - Sort by alphabetical order (sea station)" << endl;
	cout << "2 - Sort by alphabetical order (dolphin type)" << endl;
	cout << "3 - Sort by date (newest to oldest)" << endl;
	cout << "4 - Go back to the main menu" << endl;
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
		sortByDate(dolphin, date, dolphinsIndex);
		break;
	case 4:
		return false;
	}
	return true;
}

bool showSearchMenu(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	cout << "Searching Menu" << endl;
	cout << "1 - Search by sea station" << endl;
	cout << "2 - Search by dolphin type" << endl;
	cout << "3 - Search by chip number" << endl;
	cout << "4 - Go back to the main menu" << endl;
	int userChoice;
	cin >> userChoice;
	switch (userChoice)
	{
	case 1:
		searchBySeaStation(dolphin, date, dolphinsIndex);
		break;
	case 2:

		break;
	case 3:

		break;
	case 4:
		return false;
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
			break;
		case 5:
			return false;
			break;
    }
	return true;
}

int main()
{
	int dolphinsIndex = 0;
	DOLPHINS dolphin[10];
	DATE date[10];
	bool doShowMenu = true;
	do
	{
		doShowMenu = showMenu(dolphin, date, dolphinsIndex);
	} while (doShowMenu);
}