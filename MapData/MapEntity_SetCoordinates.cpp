#include "pch.h"
#include "MapEntity.h"

/*
	Sets coordinates of entity
	COORD coordinates: coordinates to set
*/
inline void MapEntity::SetCoordinates(COORD coordinates)
{
	this->_coordinates = coordinates;
}