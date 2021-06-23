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

void addNewDolphin(DOLPHINS* dolphins, DATE* data, int& dolphinIndex)
{
    showSeaStationsMenu();
    cout << "Your station (choose an option): ";

    int userStation;
    cin >> userStation;

    switch (userStation)
    {
        case 1:
            dolphins[dolphinIndex].seaStation = "Bulgaria";
            break;
        case 2:
            dolphins[dolphinIndex].seaStation = "Ukraine";
            break;
        case 3:
            dolphins[dolphinIndex].seaStation = "Russia";
            break;
        case 4:
            dolphins[dolphinIndex].seaStation = "Turkey";
            break;
        case 5:
            dolphins[dolphinIndex].seaStation = "Georgia";
            break;
        case 6:
            dolphins[dolphinIndex].seaStation = "Romania";
            break;
        default:
            addNewDolphin(dolphins, data, dolphinIndex);
    }

    showDolphinTypesMenu();
    int userDolphinType;
    cin >> userDolphinType;

    switch (userDolphinType)
    {
        case 1:
            dolphins[dolphinIndex].dolphinType = "Bottlenose dolphin";
            break;
        case 2:
            dolphins[dolphinIndex].dolphinType = "Common dolphin";
            break;
        case 3:
            dolphins[dolphinIndex].dolphinType = "Harbor porpoises";
            break;
        default:
            addNewDolphin(dolphins, data, dolphinIndex);
    }

    int userChipNumber;
    cout << "What number was the chip you put on the dolphin: ";
    cin >> userChipNumber;

    cout << "Enter the date today:" << endl;
    cout << "    Day: ";
    cin >> dolphins[dolphinIndex].day;
    cout << "    Month: ";
    cin >> dolphins[dolphinIndex].month;
    cout << "    Year: ";
    cin >> dolphins[dolphinIndex].year;
}

void showMenu()
{
	int c;
    do
    {
        cout << "\nMain menu\n\n";
        cout << "1 - Enter text\n";
        cout << "2 - View text\n";
        cout << "3 - Sort text\n";
        cout << "4 - Search text\n";
        cout << "5 - Delete text\n";
        cout << "6 - Quit program\n";
        cout << "Your choice:";
        cin >> c;

        switch (c)
        {
            case 1:
                break;
            case 2:
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