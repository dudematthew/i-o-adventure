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
	// tak swoj� drog� (kurwa) utworzy�e� PUSTY wektor obiekt�w MapEntity o nazwie enTITIES. 
	// w�a�nie widzisz w czym jest problem
	// ScreenDisplay nie widzi MapEntity
	// TYLKO o to mi chodzi
	// teraz fajnie by�oby go zadeklarowa� co nie
	// mordo to tak nie dzia�a mordo
	// nie pojeba�o mi si� z c# bo tam jest = new MapEntity(), kurwa tu te� tak jest
	// mordo ale ten obiekt przecie� jest w map enTITTY 
	// co Ty pierdolisz
	// ocipia�e� kurwa XD
	// no ocipia�em  w chuj tablicy si� nie definiuje kurwa debil
	// nie mog� zagl�da� do projekt�w wi�c spushuj to g�wno razem z komentarzami i napierdalam k 

	b.setScreenTitle(L"I/O Adventure"); // czy problem jest �e map entity nie jest zdefiniowany? si mordo my�my to robili 
	b.setScreenFont(24);
	b.setScreenSize(NULL, NULL);
	do {
		b.DisplayThroughBuffor(vect, entities); // KURWA XDDDDDDDDD
		// lepsze ni� ch�op za babe przebran o kurwa ale si� zjeba�o na chwil� NO ej no nie mog� znale��
		// tej opcji

		cout << "Continue? 1/0";
		char c = _getch();
		if (c != '1')
			break;
		b.ClearConsole();
	} while (true);
	return;
}