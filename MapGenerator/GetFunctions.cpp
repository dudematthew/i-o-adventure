#include "pch.h"
#include "MapGenerator.h"


/*
* Returns last generated random points
*/
vector <RandomPoint> MapGenerator::getRandomPoints() {
	return this->_randomPoints;
}

/*
* Returns last generated map
*/
vector <vector <vector <int>>> MapGenerator::getGeneratedMap() {
	return this->_generatedMap;
}

/*
* Returns last generated map size
*/
int MapGenerator::GetGeneratedMapSize() {
	return this->_generatedMapSize;
}