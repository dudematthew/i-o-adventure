#pragma once
#include <Windows.h>
#include <vector>

class ScreenDisplay {
public:
	static void setScreenSize(int width, int height);
	static void setScreenTitle();
	static int getScreenWidth();
	static int getScreenHeight();
	static void setScreenFont(int size);
	static void WriteToBuffor();
};