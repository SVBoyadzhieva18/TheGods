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

	cout << "Dolphin type: ";
	int userDolphinType;
	showDolphinTypesMenu();
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

	cout << "What date is today?"
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
        cout << "Your choice:";
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
	showMenu();
}