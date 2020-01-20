#include "pch.h"
#include "MapGenerator.h"

/*
	Sets MapData, that generator is currently
	working on
*/
void MapGenerator::SetWorkingMapData(MapData mapData)
{
	this->_currentMapData = mapData;
}