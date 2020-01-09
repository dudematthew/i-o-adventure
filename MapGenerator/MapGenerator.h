#pragma once
#include <vector>
#include <string>
#include <math.h>
#include "RandomPoint.h"

using namespace std;


/*
	Class that generates array, that represents
	the structure of the map based on parameters
	structure format is [y][x][z], where z is
	in range from 0 to 1
	To generate map set mapSize member value, then
	use generateMap method to generate
	Access generated map by public member
	generatedMap
*/
class MapGenerator {
public:
	int mapSizeX;
	int mapSizeY;
	MapGenerator(int sizeX, int sizeY);
	void GenerateMap();
	string PreviewMap(bool showTop);
	int GetGeneratedMapSize(string dimension);
	vector <vector <vector <int>>> getGeneratedMap();
	vector <RandomPoint> getRandomPoints();
private:
	int _generatedMapSizeX;
	int _generatedMapSizeY;
	vector <vector <vector <int>>> _generatedMap;
	vector <RandomPoint> _randomPoints;
};

	