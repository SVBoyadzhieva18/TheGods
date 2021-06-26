#include <iostream>
#include <string>
#include "data.h"
#include "presentation.h"
using namespace std;

int main()
{
	int dolphinsIndex = 0;
	DOLPHINS dolphin[200];
	DATE date[200];
	bool doShowMenu = true;
	do
	{
		doShowMenu = showMenu(dolphin, date, dolphinsIndex);
	} while (doShowMenu);
}