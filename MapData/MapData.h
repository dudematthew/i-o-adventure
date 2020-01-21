#pragma once
#include <vector>
#include <string>
#include "MapEntity.h"

using namespace std;

/*
	Class that represents one game level, that is
	divided to few members such as
	* Theme: represents theme of the map
	* MapBase: contains main skeleton of the map
	* MapEntities: contains data and position of
	game objects positioned on the map
*/
class MapData
{
public:
	MapData(short id);
	void SetMapBase(vector <vector <vector <int>>> mapBase);
	void SetMapEntites(vector <MapEntity> MapEntities);
	void AddMapEntity(MapEntity entity);
	void SetTheme(string theme);
	vector <vector <vector <int>>> GetMapBase();
	vector <MapEntity> GetMapEntities();

private:
	short _id;
	string _theme;
	vector <vector <vector <int>>> _mapBase;
	vector <MapEntity> _MapEntities;
};
