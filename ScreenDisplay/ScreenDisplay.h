#pragma once
#include <Windows.h>

class ScreenDisplay {
public:
	static void setScreenSize(int width, int height);
	static void setScreenTitle();
	static int getScreenWidth();
	static void setScreenFont(int size);
};