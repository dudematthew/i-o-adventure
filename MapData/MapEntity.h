#pragma once

#include <Windows.h>
#include <string>
#include "pch.h"

using namespace std;

class MapEntity
{
public:
	unsigned short id;
	COORD coordinates;
	bool visible;
	bool alive;
	char symbol;

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