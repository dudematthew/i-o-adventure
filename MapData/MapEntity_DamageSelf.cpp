#include "pch.h"
#include "MapEntity.h"

/*
	Substracts given value from entity hp
	short value: value to substract
*/
void MapEntity::DamageSelf(short value) {
	this->_hp -= value;

	if (this->_hp <= 0) {
		this->_hp = 0;
		this->_SetAliveState(false);
	}
}
