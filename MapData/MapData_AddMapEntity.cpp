#include "MapData.h"

/*
	Adds new entity to the map entitites
	MapEntity mapEntity: entity to add
*/
void MapData::AddMapEntity(MapEntity entity)
{
	this->_MapEntities.push_back(entity);
}