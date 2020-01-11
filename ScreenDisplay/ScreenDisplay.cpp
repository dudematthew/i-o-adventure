#include "ScreenDisplay.h"
#include <iostream>
#include <conio.h>

int main()
{
	vector < vector < vector < int > > > vect
	{ 
		{ 
			{ 218, 205, 196, 196, 196, 196, 191 },
			{ 179, 178, 176, 178, 178, 178, 179 },
			{ 179, 178, 176, 176, 176, 178, 179 },
			{ 179, 178, 176, 176, 176, 178, 179 },
			{ 179, 178, 176, 176, 176, 178, 179 },
			{ 179, 178, 178, 176, 178, 178, 179 },
			{ 192, 196, 196, 205, 196, 196, 217 }

		} 
	};

	ScreenDisplay b;
	b.setScreenTitle(L"I/O Adventure");
	b.setScreenFont(24);
	b.setScreenSize(NULL, NULL);
	b.DisplayThroughBuffor(vect);
	_getch();
	return 0;
}