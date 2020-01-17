#include "pch.h"
#include "MapEntity.h"

/*
	Sets the type of entity
	List of entity types can be found in documentation
	string type: type to set
*/
void MapEntity::SetType(string type)
{
	this->_type = type;
}