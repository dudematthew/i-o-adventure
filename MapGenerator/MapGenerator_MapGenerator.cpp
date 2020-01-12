#include "pch.h"
#include "MapGenerator.h"

/*
	Constructor
	int size: size of generated map (default 10)
*/
MapGenerator::MapGenerator(int sizeX = 10, int sizeY = 10) {
	this->mapSizeX = sizeX;
	this->mapSizeY = sizeY;

	this->_generatedMapSizeX = 0;
	this->_generatedMapSizeY = 0;
}