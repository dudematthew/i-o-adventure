#pragma once

#include <Windows.h>
#include "pch.h"

using namespace std;

class MapEntity
{
public:
	COORD coordinates;
	bool visible;
	bool alive;

	MapEntity(bool visible);
	void DamageSelf(short value);
	void SetHP(short value);
	string type;

private:

	short hp;
};

MapEntity::MapEntity(bool visible = true) {
	if (visible)
		this->visible = true;
	else
		this->visible = false;


}

/*
	
*/
void MapEntity::DamageSelf(short value) {

}

void MapEntity::SetHP(short value) {

}