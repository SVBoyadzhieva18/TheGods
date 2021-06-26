#ifndef PRESENTATION_H
#define PRESENTATION_H
#include "data.h"
using namespace std;

void showDolphin(DOLPHINS dolphin, DATE date);
void showAllDolphins(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);
bool showSortMenu(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);
bool showSearchMenu(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);
bool showMenu(DOLPHINS* dolphin, DATE* date, int& dolphinsIndex);
void showSeaStationsMenu();
void showDolphinTypesMenu();

#endif