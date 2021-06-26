#pragma once
#include <string>
#include <conio.h>
#include <time.h>
#include <iostream>
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