﻿#include "pch.h"
#include "ScreenDisplay.h"
int main()
{
	ScreenDisplay b;
	b.setScreenTitle(L"I/O Adventure");
	b.setScreenFont(24);
	b.setScreenSize(NULL, NULL);
	b.PreviewDisplay();
	return 0;
}