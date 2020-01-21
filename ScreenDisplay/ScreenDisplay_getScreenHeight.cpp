#include "pch.h"
#include "ScreenDisplay.h"

int ScreenDisplay::getScreenHeight() {
	CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbiInfo))
		return csbiInfo.dwSize.Y;
	else
		return NULL;
}