#include "pch.h"
#include "ScreenDisplay.h"

void ScreenDisplay::DisplayThroughBuffor(vector <vector <vector <int>>> map, vector <MapEntity> entities)
{
	ScreenDisplay size;
	int bL = size.getScreenWidth();
	vector <vector <vector <int>>> p;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	int mH = map.size();
	int mW = map[0].size();
	unsigned char* data = new unsigned char[(long)(mH * bL)];

	for (int i = 0; i < mH; i++) {

		for (int j = 0; j < mW; j++) {
				data[j + (i * bL)] = (char)(map[i][j][1]);
		}
		for (int j = mW; j < bL; j++) {
			data[j + (i * bL)] = ' ';
		}
	}

	for (int i = 0; i < entities.size(); i++) {
		//data[j + (i * bL)] = (char)(map[entities[i].GetHp(());
	}

	WriteFile(handle, data, sizeof(char) * mH * bL, NULL, NULL);
}