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
	cout << "You have entered the following patient:" << endl;
	for (int i = 0; i < dolphinsIndex; i++)
	{
		showDolphin(dolphin[i], date[i]);
	}
}

void showSortMenu()
{
	cout << "Sort Menu" << endl;
	cout << "1 - Sort by chip number (smallest to largest)" << endl;
	cout << "2 - Sort by alphabetical order (sea station)" << endl;
	cout << "3 - Sort by alphabetical order (dolphin type)" << endl;
	cout << "4 - Sort by date (newest to oldest)" << endl;
}

void sortByChipNumber(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	int count = dolphinsIndex;
	for (int i = 0; i < count - 1; i++)
	{
		if (dolphin[i].chipNumber > dolphin[i + 1].chipNumber)
		{
			swap(dolphin[i], dolphin[i + 1]);
		}
	}
	for (int i = 0; i < count; i++)
	{
		showDolphin(dolphin[i], date[i]);
	}
}

void sortAlphabeticallySeaStations(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	int count = dolphinsIndex;
	for (int i = 0; i < count - 1; i++)
	{
		if (dolphin[i].seaStation > dolphin[i + 1].seaStation)
		{
			swap(dolphin[i], dolphin[i + 1]);
		}
	}
	for (int i = 0; i < count; i++)
	{
		showDolphin(dolphin[i], date[i]);
	}
	cout << endl << endl;
}

void showMenu(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	int c;
    do
    {
        cout << "\nMain menu\n\n";
        cout << "1 - Add a dolphin\n";
        cout << "2 - View all dolphins\n";
        cout << "3 - Sort text\n";
        cout << "4 - Search text\n";
        cout << "5 - Delete text\n";
        cout << "6 - Quit program\n";
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
				sortByChipNumber(dolphin, date, dolphinsIndex);
                break;
            case 4:
                break;
            case 5:
                break;

        }
    }
    while (c != 6);
}

int main()
{
	int dolphinsIndex = 0;
	DOLPHINS dolphin[10];
	DATE date[10];
	bool doShowMenu = true;
	do
	{
		showMenu(dolphin, date, dolphinsIndex);
	} while (doShowMenu);
}