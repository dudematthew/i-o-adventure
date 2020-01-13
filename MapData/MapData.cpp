#include "pch.h"
#include <iostream>
#include "MapData.h"

using namespace std;

int main()
{ 
	MapData data(12);

	MapEntity entity(12);

	data.AddMapEntity(entity);

	vector <MapEntity> mapEntities = data.GetMapEntities();

	MapEntity inputEntity = mapEntities[0];

	inputEntity.SetHp(12);

	cout << inputEntity.GetHp();
}
