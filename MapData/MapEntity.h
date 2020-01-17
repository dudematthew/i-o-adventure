#pragma once

#include "pch.h"
#include <Windows.h>
#include <string>

using namespace std;

/*
	Class that represents one game object, that is
	used to describe its map element
*/
class MapEntity
{
public:
	MapEntity(short id);
	void DamageSelf(short value);
	void SetHp(short value);
	short GetHp();
	void SetChar(int symbol);
	void SetCoordinates(COORD coordinates);
	void SetType(string type);
	void SetVisibility(bool visible);
	short GetId();

private:
	void _SetAliveState(bool alive);

	COORD _coordinates;
	unsigned short _id;
	bool _alive;
	short _hp;
	bool _visible;
	char _symbol;
	string _type;
};