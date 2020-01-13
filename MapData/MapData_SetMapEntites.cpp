#include "pch.h"
#include "MapData.h"

/*
	Overwrites current map entites by new ones
	vector <MapEntity> MapEntities: new map entities
	to set
*/
void MapData::SetMapEntites(vector <MapEntity> MapEntities)
{
	this->_MapEntities = MapEntities;
}