#include "ScreenDisplay.h"

void ScreenDisplay::setScreenTitle()
{
	SetConsoleTitle(TEXT("I/O Adventure"));
}

void ScreenDisplay::setScreenFont(int size)
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof cfi;
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = size;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy_s(cfi.FaceName, L"Lucida Console");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &cfi);
}

int ScreenDisplay::getScreenWidth() {
	CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbiInfo))
		return csbiInfo.dwSize.X;
	else
		return NULL;
}

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

int main()
{
	return 0;
}