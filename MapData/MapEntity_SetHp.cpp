#include "pch.h"
#include "MapEntity.h"

/*
	Sets entity hp to given value
	short value: value to set
*/
void MapEntity::SetHp(short value) {
	this->_hp = value;

	if (this->_hp <= 0) {
		this->_hp = 0;
		this->_SetAliveState(false);
	}

	if (this->_hp > 0) {
		this->_SetAliveState(true);
	}
}