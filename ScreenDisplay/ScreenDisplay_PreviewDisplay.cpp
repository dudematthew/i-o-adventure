#include "ScreenDisplay.h"
#include "MapEntity.h"
#include <iostream>
#include <conio.h>

void ScreenDisplay::PreviewDisplay()
{
	vector < vector < vector < int > > > vect
	{  
		{
			{ 196 , 219 },
			{ 171 , 219 },
			{ 172 , 219 },
			{ 210 , 219 },
			{ 208 , 219 },
			{ 220 , 219 },
			{ 218 , 219 },
			{ 210 , 219 }
		},
		{
			{ 197 , 219 },
			{ 197 , 219 },
			{ 197 , 219 },
			{ 197 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 }
		},
		{
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 }
		},
		{
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 }
		},
		{
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 }
		},
		{
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 }
		},
		{
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 }
		},
		{
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 },
			{ 0 , 219 }
		}
	};
	MapEntity cokolwiek;
	cokolwiek.DamageSelf(5);
	cout << cokolwiek.GetHp();
	_getch();
	ScreenDisplay b;
	vector <MapEntity> entities;
	COORD previewCoords;
	previewCoords.X = 1;
	previewCoords.Y = 1;
	b.setScreenTitle(L"I/O Adventure");
	b.setScreenFont(24);
	b.setScreenSize(NULL, NULL);
	do {
		b.DisplayThroughBuffor(vect, entities);

		cout << "Continue? 1/0";
		char c = _getch();
		if (c != '1')
			break;
		b.ClearConsole();
	} while (true);
	return;
}