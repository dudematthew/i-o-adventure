#include "ScreenDisplay.h"
#include <iostream>

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

int ScreenDisplay::getScreenHeight() {
	CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbiInfo))
		return csbiInfo.dwSize.Y;
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

void ScreenDisplay::WriteToBuffor()
{
	ScreenDisplay buf;
	int bufH = buf.getScreenHeight();
	int bufW = buf.getScreenWidth();
	int mS = 12;
	int k = bufW;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	unsigned char* data = new unsigned char[bufW * mS];

	for (int i = 0; i < mS; i++) {

		for (int j = 0; j < bufW / 2; j++)
			data[j + (i * bufW)] = ' ';

		for (int j = bufW / 2; j < (bufW / 2) + mS; j++)
			data[j + (i * bufW)] = '#';

		for (int j = (bufW / 2) + mS; j < bufW; j++)
			data[j + (i * bufW)] = ' ';
	}
	WriteFile(handle, data, sizeof(char) * bufW * mS, NULL, NULL);
}

int main()
{
	ScreenDisplay b;
	b.setScreenSize(NULL, NULL);
	b.WriteToBuffor();
	return 0;
}