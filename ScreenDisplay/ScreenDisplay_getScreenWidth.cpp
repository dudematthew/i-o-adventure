#include "ScreenDisplay.h"

int ScreenDisplay::getScreenWidth() {
	CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbiInfo))
		return csbiInfo.dwSize.X;
	else
		return NULL;
}