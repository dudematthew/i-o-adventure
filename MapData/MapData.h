#pragma once
#include <vector>
#include "MapEntity.h"

using namespace std;

class MapData
{
public:
	MapData();
	void SetMapBase(vector <vector <vector <int>>> mapBase);
	void SetMapEntites(vector <MapEntity> MapEntities);
	void AddMapEntity(MapEntity entity);
private:
	vector <vector <vector <int>>> _mapBase;
	vector <MapEntity> _MapEntities;
};


