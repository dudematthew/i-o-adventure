#include "MapEntity.h"

/*
	Marks entity as dead, sets alive member as false
*/
inline void MapEntity::_SetAliveState(bool alive)
{
	this->_alive = alive;
}