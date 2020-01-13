#include "pch.h"
#include "MapEntity.h"

/*
	Marks entity as dead, sets alive member as false
*/
inline void MapEntity::_SetAliveState(bool alive = true)
{
	this->_alive = alive;
}