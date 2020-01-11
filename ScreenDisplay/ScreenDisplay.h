#pragma once
#include <Windows.h>
#include <vector>
#include <string>

using namespace std;

class ScreenDisplay {
public:
	static void setScreenSize(int width, int height);
	static void setScreenTitle(wstring name);
	static int getScreenWidth();
	static int getScreenHeight();
	static void setScreenFont(int size);
	static void DisplayThroughBuffor(vector <vector <vector <int>>> map);
};