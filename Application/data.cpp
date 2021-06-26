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