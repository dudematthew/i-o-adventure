#include "pch.h"
#include "MapGenerator.h"

/*
* Constructor
* int size: size of generated map (default 10)
*/
MapGenerator::MapGenerator(int size = 10) {
	this->mapSize = size;
	this->_generatedMapSize = 0;
}