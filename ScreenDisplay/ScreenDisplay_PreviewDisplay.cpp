#include "ScreenDisplay.h"
#include <iostream>
#include <conio.h>
// w czym problem
// go lower

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

	ScreenDisplay b;
	vector <MapEntity> entities; // tu bam nie istnieje  no tu jest problem tylko tutaj jest problem
	// tak swoj¹ drog¹ (kurwa) utworzy³eœ PUSTY wektor obiektów MapEntity o nazwie enTITIES. 
	// w³aœnie widzisz w czym jest problem
	// ScreenDisplay nie widzi MapEntity
	// TYLKO o to mi chodzi
	// teraz fajnie by³oby go zadeklarowaæ co nie
	// mordo to tak nie dzia³a mordo
	// nie pojeba³o mi siê z c# bo tam jest = new MapEntity(), kurwa tu te¿ tak jest
	// mordo ale ten obiekt przecie¿ jest w map enTITTY 
	// co Ty pierdolisz
	// ocipia³eœ kurwa XD
	// no ocipia³em  w chuj tablicy siê nie definiuje kurwa debil
	// nie mogê zagl¹daæ do projektów wiêc spushuj to gówno razem z komentarzami i napierdalam k 

	b.setScreenTitle(L"I/O Adventure"); // czy problem jest ¿e map entity nie jest zdefiniowany? si mordo myœmy to robili 
	b.setScreenFont(24);
	b.setScreenSize(NULL, NULL);
	do {
		b.DisplayThroughBuffor(vect, entities); // KURWA XDDDDDDDDD
		// lepsze ni¿ ch³op za babe przebran o kurwa ale siê zjeba³o na chwilê NO ej no nie mogê znaleŸæ
		// tej opcji

		cout << "Continue? 1/0";
		char c = _getch();
		if (c != '1')
			break;
		b.ClearConsole();
	} while (true);
	return;
}