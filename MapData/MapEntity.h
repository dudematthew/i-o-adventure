#pragma once

#include <Windows.h>
#include <string>
#include "pch.h"

using namespace std;

class MapEntity
{
public:
	MapEntity(short id);
	void DamageSelf(short value);
	void SetHp(short value);
	short GetHp();
	void SetChar(char symbol);
	void SetCoordinates(COORD coordinates);
	void SetType(string type);
	void SetVisibility(bool visible);

private:
	void SetAliveState(bool alive);

	COORD coordinates;
	unsigned short id;
	bool alive;
	short hp;
	bool visible;
	char symbol;
	string type;
};