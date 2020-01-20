#include "pch.h"
#include "MapGenerator.h"

/*
	Saves generated elements to 
*/
void MapGenerator::ApplyChanges()
{
	vector <MapEntity> temporary = {};

	this->_currentMapData.SetMapBase(getGeneratedMap());
	this->_currentMapData.SetMapEntites(temporary);
}