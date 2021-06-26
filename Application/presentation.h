#pragma once
#include <string>
#include <conio.h>
#include <time.h>
using namespace std;

void showSeaStationsMenu();

void showDolphinTypesMenu();

void enterDate(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);

void addDolphin(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);

void showDolphin(DOLPHINS dolphin, DATE date);

void showAllDolphins(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);

void searchBySeaStation(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);

void searchByDolphinType(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);

void searchByChipNumber(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);

bool showSortMenu(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);

bool showSearchMenu(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);

bool showMenu(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);