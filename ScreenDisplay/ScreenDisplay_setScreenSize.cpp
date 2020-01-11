#include "ScreenDisplay.h"

void ScreenDisplay::setScreenSize(int width, int height)
{
	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD mSize;
	_COORD coord;
	mSize = GetLargestConsoleWindowSize(hConsoleOutput);

	if (width == NULL || width > mSize.X)
		coord.X = mSize.X;
	else
		coord.X = mSize.X = width;

	if (height == NULL || height > mSize.Y)
		coord.Y = mSize.Y;
	else
		coord.Y = mSize.Y = height;

	_SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Bottom = mSize.Y - 1;
	Rect.Right = mSize.X - 1;

	SetConsoleScreenBufferSize(hConsoleOutput, coord);
	SetConsoleWindowInfo(hConsoleOutput, FALSE, &Rect);
}