#include "MapEntity.h"

/*
	Substracts given value from entity hp
	short value: value to substract
*/
void MapEntity::DamageSelf(short value) {
	this->hp -= value;

	if (this->hp <= 0) {
		this->hp = 0;
		SetAliveState(false);
	}
}
