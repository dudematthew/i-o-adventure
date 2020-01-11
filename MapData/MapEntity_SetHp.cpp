#include "MapEntity.h"

/*
	Sets entity hp to given value
	short value: value to set
*/
void MapEntity::SetHp(short value) {
	this->hp = value;

	if (this->hp <= 0) {
		this->hp = 0;
		SetAliveState(false);
	}

	if (this->hp > 0) {
		SetAliveState(true);
	}
}