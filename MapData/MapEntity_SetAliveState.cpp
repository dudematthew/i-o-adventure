#include "MapEntity.h"

/*
	Marks entity as dead, sets alive member as false
*/
inline void MapEntity::SetAliveState(bool alive)
{
	this->alive = alive;
}