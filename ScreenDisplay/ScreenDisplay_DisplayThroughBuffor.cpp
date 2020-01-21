#include "pch.h"
#include "ScreenDisplay.h"

void ScreenDisplay::DisplayThroughBuffor(vector <vector <vector <int>>> map, vector <MapEntity> entities)
{
	/*ScreenDisplay size;

	int bL = size.getScreenWidth();
	vector <vector <vector <int>>> p;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	unsigned char* data = new unsigned char[(long)(map.size() * bL)];

	for (int i = 0; i < map.size(); i++) {

		for (int j = 0; j < map[0].size(); j++) {
				data[j + (i * bL)] = (char)(map[i][j][1]);
		}
		for (int j = static_cast<int>(map[0].size()); j < bL; j++) {
			data[j + (i * bL)] = ' ';
		}
	}

	for (int i = 0; i < entities.size(); i++) {
		data[entities[i].GetCoordinates().X + (entities[i].GetCoordinates().Y * bL)] = (char)(entities[i].GetChar());
	}

	WriteFile(handle, data, sizeof(char) * map.size() * bL, NULL, NULL);*/
}