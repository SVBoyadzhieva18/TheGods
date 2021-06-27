<<<<<<< HEAD:Application/Aqua/Aqua/data.cpp
#include <iostream>
#include "data.h"
#include "presentation.h"
using namespace std;

const int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

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

void addDolphin(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	showSeaStationsMenu();
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
	enterDate(dolphin, date, dolphinsIndex);
	dolphinsIndex++;
	cout << endl;
}

void searchByDolphinType(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	string userDolphinType;
	int userChoice;
	showDolphinTypesMenu();
	cout << "Dolphin type: ";
	cin >> userChoice;
	switch (userChoice)
	{
	case 1:
		userDolphinType = "Bottlenose dolphin";
		break;
	case 2:
		userDolphinType = "Common dolphin";
		break;
	case 3:
		userDolphinType = "Harbor porpoises";
		break;
	}
	for (int i = 0; i < dolphinsIndex; i++)
	{
		if (dolphin[i].dolphinType == userDolphinType)
		{
			showDolphin(dolphin[i], date[i]);
		}
	}
}

bool leapYear(int y)
{
	if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))
		return true;
	else
		return false;
}

bool checkDate(int mm, int dd, int yy)

{
	if (mm < 1 or mm > 12) return false;
	if (yy < 1900 or yy > 2100) return false;
	if (leapYear(yy) and (mm == 2) and (dd==29)) return true;
	if (dd < 1 && dd > days[mm]) return false;
	return true;
}

void enterDate(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	do {
		cout << "    Month: ";
		cin >> date[dolphinsIndex].month;
		while (date[dolphinsIndex].month > 12 || date[dolphinsIndex].month < 1)
		{
			cout << "You have to enter a valid date!" << endl;
			cout << "    Month: ";
			cin >> date[dolphinsIndex].month;
		}
		cout << "    Day: ";
		cin >> date[dolphinsIndex].day;
		while ((date[dolphinsIndex].day > days[date[dolphinsIndex].month] || date[dolphinsIndex].day < 1)
			 and (date[dolphinsIndex].month!=2 and date[dolphinsIndex].day!=29))
		{
			cout << "You have to enter a valid date!" << endl;
			cout << "    Day: ";
			cin >> date[dolphinsIndex].day;
		}

		cout << "    Year: ";
		cin >> date[dolphinsIndex].year;
		while (date[dolphinsIndex].year > 2027 || date[dolphinsIndex].year < 2009)
		{
			cout << "You have to enter a valid date!" << endl;
			cout << "    Year: ";
			cin >> date[dolphinsIndex].year;
		}
	} while (!checkDate(date[dolphinsIndex].month, date[dolphinsIndex].day, date[dolphinsIndex].year));
	cout << "A dolphin was added to your list!\n";
}

void searchByChipNumber(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	int userChipNumber;
	cout << "\nEnter the chip number you want to search for: ";
	cin >> userChipNumber;
	for (int i = 0; i < dolphinsIndex; i++)
	{
		if (dolphin[i].chipNumber == userChipNumber)
		{
			showDolphin(dolphin[i], date[i]);
		}
	}
=======
#include <iostream>
#include "data.h"
#include "presentation.h"
using namespace std;

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

void addDolphinType(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
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
	default:
		cout << "Enter a valid number!" << endl;
		addDolphinType(dolphin, date, dolphinsIndex);
		break;
	}
}

void addSeaStation(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	showSeaStationsMenu();
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
	default:
		cout << "Enter a valid number!" << endl;
		addSeaStation(dolphin, date, dolphinsIndex);
		break;
	}
}

void addDolphin(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	addSeaStation(dolphin, date, dolphinsIndex);

	cin.ignore();

	addDolphinType(dolphin, date, dolphinsIndex);

	cout << "Chip Number: ";
	cin >> dolphin[dolphinsIndex].chipNumber;

	cout << "What date is today?" << endl;
	enterDate(dolphin, date, dolphinsIndex);
	dolphinsIndex++;
	cout << endl;
}

void searchByDolphinType(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	string userDolphinType;
	int userChoice;
	showDolphinTypesMenu();
	cout << "Dolphin type: ";
	cin >> userChoice;
	switch (userChoice)
	{
	case 1:
		userDolphinType = "Bottlenose dolphin";
		break;
	case 2:
		userDolphinType = "Common dolphin";
		break;
	case 3:
		userDolphinType = "Harbor porpoises";
		break;
	}
	for (int i = 0; i < dolphinsIndex; i++)
	{
		if (dolphin[i].dolphinType == userDolphinType)
		{
			showDolphin(dolphin[i], date[i]);
		}
	}
}

void enterDate(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	cout << "    Day: ";
	cin >> date[dolphinsIndex].day;
	while (date[dolphinsIndex].day > 30 || date[dolphinsIndex].day < 1)
	{
		cout << "You have to enter a valid date!" << endl;
		cout << "    Day: ";
		cin >> date[dolphinsIndex].day;
	}
	cout << "    Month: ";
	cin >> date[dolphinsIndex].month;
	while (date[dolphinsIndex].month > 12 || date[dolphinsIndex].month < 1)
	{
		cout << "You have to enter a valid date!" << endl;
		cout << "    Month: ";
		cin >> date[dolphinsIndex].month;
	}
	cout << "    Year: ";
	cin >> date[dolphinsIndex].year;
	while (date[dolphinsIndex].year > 2027 || date[dolphinsIndex].year < 2009)
	{
		cout << "You have to enter a valid date!" << endl;
		cout << "    Year: ";
		cin >> date[dolphinsIndex].year;
	}
}

void searchByChipNumber(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex)
{
	int userChipNumber;
	cout << "\nEnter the chip number you want to search for: ";
	cin >> userChipNumber;
	for (int i = 0; i < dolphinsIndex; i++)
	{
		if (dolphin[i].chipNumber == userChipNumber)
		{
			showDolphin(dolphin[i], date[i]);
		}
	}
>>>>>>> cc34339f3ec76a50e32219fd0909793e2252f1f3:Application/Aqua/data.cpp
}