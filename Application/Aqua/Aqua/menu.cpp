#include <iostream>
#include <string>
#include "presentation.h"
#include "data.h"
using namespace std;

int main()
{
	int dolphinsIndex = 0;
	DOLPHINS dolphin[10];
	DATE date[10];
	bool doShowMenu = true;
	do
	{
		doShowMenu = showMenu(dolphin, date, dolphinsIndex);
	} while (doShowMenu);
}