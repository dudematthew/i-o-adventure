#include "pch.h"
#include "ScreenDisplay.h"

void ScreenDisplay::setScreenTitle(wstring title)
{
	SetConsoleTitleW(title.c_str());
}