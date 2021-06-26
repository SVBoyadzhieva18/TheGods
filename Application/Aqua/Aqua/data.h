#ifndef DATA_H
#define DATA_H
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

void sortAlphabeticallySeaStations(DOLPHINS* dolphin, DATE* date, int& dolphinIndex);
void sortAlphabeticallyDolphinType(DOLPHINS* dolphin, DATE* date, int& dolphinIndex);
void searchBySeaStation(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);
void addDolphin(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);
void searchByDolphinType(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);
void enterDate(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);
void searchByChipNumber(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);
#endif // !DATA_H