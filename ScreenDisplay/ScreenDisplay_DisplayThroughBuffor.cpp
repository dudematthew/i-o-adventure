#include "ScreenDisplay.h"

void ScreenDisplay::DisplayThroughBuffor(vector <vector <vector <int>>> map)
{
	ScreenDisplay size;
	int bL = size.getScreenWidth();
	vector <vector <vector <int>>> p;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	int mH = map[0].size();
	int mW = map[0][0].size();
	unsigned char* data = new unsigned char[mH * bL];

	for (int i = 0; i < mH; i++) {

		for (int j = 0; j < mW; j++) {
			data[j + (i * bL)] = (char)(map[0][i][j]);
		}
		for (int j = mW; j < bL; j++) {
			data[j + (i * bL)] = ' ';
		}
	}
	WriteFile(handle, data, sizeof(char) * mH * bL, NULL, NULL);
}