#include "pch.h"
#include "MapEntity.h"
#include <iostream>

/*
	Marks entity as dead, sets alive member as false
*/
void MapEntity::_SetAliveState(bool alive = true)
{
	this->_alive = alive;
}