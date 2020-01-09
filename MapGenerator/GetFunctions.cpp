#include "pch.h"
#include "MapGenerator.h"
#include <string>


/*
	Returns last generated random points
*/
vector <RandomPoint> MapGenerator::getRandomPoints() {
	return this->_randomPoints;
}

/*
	Returns last generated map
*/
vector <vector <vector <int>>> MapGenerator::getGeneratedMap() {
	return this->_generatedMap;
}

/*
	Returns last generated map size
	string dimension: returned dimension of map 
	length: "x" or "y" (default "x")
*/
int MapGenerator::GetGeneratedMapSize(string dimension = "x") {

	if (dimension == "Y" || dimension == "Y")
		return this->_generatedMapSizeY;
	else
		return this->_generatedMapSizeX;
}