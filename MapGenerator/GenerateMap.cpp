#include "pch.h"
#include "MapGenerator.h"

/*
* Generates by random a map, and saves it to
* generatedMap class variable
*/
void MapGenerator::GenerateMap() {
	int mapSize = this->mapSize;
	vector <vector <vector <int>>> generatedMap;
	vector <RandomPoint> randomPoints;

	for (int i = 0; i < mapSize; i++) {
		vector <vector <int>> x;
		for (int j = 0; j < mapSize; j++) {
			vector <int> z;
			z.push_back(0);
			z.push_back(-1);

			x.push_back(z);
		}
		generatedMap.push_back(x);
	}

	// Calculate the amount of random points
	int randomPointsAmount = (int)floor(sqrt(mapSize));

	// Generate random points coordinates and
	// save them to randomPoints 
	for (int i = 0; i < randomPointsAmount; i++) {
		RandomPoint randomPoint;

		randomPoint.x = (rand() % (mapSize - 2)) + 1;
		randomPoint.y = (rand() % (mapSize - 2)) + 1;

		randomPoint.roomSize = rand() % ((int)floor(mapSize / 2));

		randomPoints.push_back(randomPoint);
	}

	// Get every random point data and put it
	// on the map and then generate rooms
	for (int i = 0; i < randomPoints.size(); i++) {
		RandomPoint currentRandomPoint = randomPoints[i];
		int x = currentRandomPoint.x;
		int y = currentRandomPoint.y;
		int currentRoomSize = currentRandomPoint.roomSize;
		int yPointer, xPointer;

		generatedMap[y][x][0] = 1;

		yPointer = y;
		// Go up and right
		for (int j = 0; j < currentRoomSize - 1; j++) {

			if (yPointer > 1)
				yPointer--;

			generatedMap[yPointer][x][0] = 1;
			xPointer = x;
			for (int k = 0; k < currentRoomSize - 1; k++)
			{
				if (xPointer < mapSize - 2)
					xPointer++;

				generatedMap[yPointer][xPointer][0] = 1;
			}
		}

		xPointer = x;
		// Go right and down
		for (int j = 0; j < currentRoomSize - 1; j++) {

			if (xPointer < mapSize - 2)
				xPointer++;

			generatedMap[y][xPointer][0] = 1;
			yPointer = y;
			for (int k = 0; k < currentRoomSize - 1; k++)
			{
				if (yPointer < mapSize - 2)
					yPointer++;

				generatedMap[yPointer][xPointer][0] = 1;
			}
		}

		yPointer = y;
		// Go down and left
		for (int j = 0; j < currentRoomSize - 1; j++) {

			if (yPointer < mapSize - 2)
				yPointer++;

			generatedMap[yPointer][x][0] = 1;
			xPointer = x;
			for (int k = 0; k < currentRoomSize - 1; k++)
			{
				if (xPointer > 1)
					xPointer--;

				generatedMap[yPointer][xPointer][0] = 1;
			}
		}

		xPointer = x;
		// Go left and up
		for (int j = 0; j < currentRoomSize - 1; j++) {

			if (xPointer > 1)
				xPointer--;

			generatedMap[y][xPointer][0] = 1;
			yPointer = y;
			for (int k = 0; k < currentRoomSize - 1; k++)
			{
				if (yPointer > 1)
					yPointer--;

				generatedMap[yPointer][xPointer][0] = 1;
			}
		}



	}



	this->_randomPoints = randomPoints;
	this->_generatedMapSize = mapSize;
	this->_generatedMap = generatedMap;
}