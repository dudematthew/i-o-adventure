#pragma once
#include <vector>
#include "MapEntity.h"


using namespace std;

class MapData
{
public:


	MapData();
private:
	vector <vector <vector <int>>> _mapBase;
	MapEntity _MapEntities;
};


