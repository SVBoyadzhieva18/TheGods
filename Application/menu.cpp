#include <iostream>
#include <string>
using namespace std;

void showDolphinTypesMenu()
{
    cout << "Types of dolphins in The Black Sea" << endl << endl;
    cout << "1 - Bottlenose dolphin" << endl;
    cout << "2 - Common dolphin" << endl;
    cout << "3 - Harbor porpoises" << endl;
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