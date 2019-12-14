#include <Windows.h>
#include <iostream>

#define PERR(bSuccess, api){if(!(bSuccess)) printf("%s:Error %d from %s \ on line% d\n", __FILE__, GetLastError(), api, __LINE__);}

#pragma main functions

void SetScreenTitle() {
	BOOL bSuccess;
	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE); //grabbing the output console handle
	bSuccess = SetConsoleTitle(TEXT("I/O Adventure")); // setting the Console Window Title to "I/O Adventure"
	PERR(bSuccess, "SetConsoleTitle"); //checking if the title was changed with a success
	return;
}

void SetScreenFont() {
	/*
	***************
	***
	***	Left for future expansion
	***
	***************
	*/
	return;
}

void SetScreenSize() {
	
	BOOL bSuccess; // this bool
	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE); //grabbing the output console handle
	COORD mSize = GetLargestConsoleWindowSize(hConsoleOutput); //getting the largest console size for current display

	_COORD coord; //creating new coord holding the max size, from mSize, for the size of the buffor
	coord.X = mSize.X;
	coord.Y = mSize.Y;

	_SMALL_RECT Rect; //creating the small_rect starting from 0,0 (top left) and ending on the top right of the screen (mSize.X, mSize.Y)
	Rect.Top = 0; 
	Rect.Left = 0;
	Rect.Bottom = mSize.Y - 1;
	Rect.Right = mSize.X - 1;

	bSuccess = SetConsoleScreenBufferSize(hConsoleOutput, coord); //Setting the buffor size
	PERR(bSuccess, "SetConsoleScreenBufferSize"); //checking if the bufforSize ended with a success

	bSuccess = SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &Rect); //setting the window size
	PERR(bSuccess, "SetConsoleWindowInfo"); //checking if the bufforSize ended with a success

	return;
}

void SetScreen(bool size, bool font, bool title) {
	if (size)SetScreenSize();
	if (font)SetScreenFont();
	if (title)SetScreenTitle();
	return;
}

int main()
{
	SetScreen(true, false, true);

	return 0;
}