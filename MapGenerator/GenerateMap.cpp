#include "pch.h"
#include "MapGenerator.h"
#include <iostream>
using namespace std; // DANGER 

/*
* Generates by random a map, and saves it to
* generatedMap class variable
*/
void MapGenerator::GenerateMap() {
	int mapSize = this->mapSize;
	vector <vector <vector <int>>> generatedMap;
	vector <RandomPoint> randomPoints;

	int EmptyPlaceId = 1;
	int FilledPlaceId = 0;

	for (int i = 0; i < mapSize; i++) {
		vector <vector <int>> x;
		for (int j = 0; j < mapSize; j++) {
			vector <int> z;
			z.push_back(FilledPlaceId);
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

		generatedMap[y][x][0] = EmptyPlaceId;

		yPointer = y;
		// Go up and right
		for (int j = 0; j < currentRoomSize - 1; j++) {

			if (yPointer > 1)
				yPointer--;

			generatedMap[yPointer][x][0] = EmptyPlaceId;
			xPointer = x;
			for (int k = 0; k < currentRoomSize - 1; k++)
			{
				if (xPointer < mapSize - 2)
					xPointer++;

				generatedMap[yPointer][xPointer][0] = EmptyPlaceId;
			}
		}

		xPointer = x;
		// Go right and down
		for (int j = 0; j < currentRoomSize - 1; j++) {

			if (xPointer < mapSize - 2)
				xPointer++;

			generatedMap[y][xPointer][0] = EmptyPlaceId;
			yPointer = y;
			for (int k = 0; k < currentRoomSize - 1; k++)
			{
				if (yPointer < mapSize - 2)
					yPointer++;

				generatedMap[yPointer][xPointer][0] = EmptyPlaceId;
			}
		}

		yPointer = y;
		// Go down and left
		for (int j = 0; j < currentRoomSize - 1; j++) {

			if (yPointer < mapSize - 2)
				yPointer++;

			generatedMap[yPointer][x][0] = EmptyPlaceId;
			xPointer = x;
			for (int k = 0; k < currentRoomSize - 1; k++)
			{
				if (xPointer > 1)
					xPointer--;

				generatedMap[yPointer][xPointer][0] = EmptyPlaceId;
			}
		}

		xPointer = x;
		// Go left and up
		for (int j = 0; j < currentRoomSize - 1; j++) {

			if (xPointer > 1)
				xPointer--;

			generatedMap[y][xPointer][0] = EmptyPlaceId;
			yPointer = y;
			for (int k = 0; k < currentRoomSize - 1; k++)
			{
				if (yPointer > 1)
					yPointer--;

				generatedMap[yPointer][xPointer][0] = EmptyPlaceId;
			}
		}

		// Generates x-path to next point
		if (randomPoints.size() > i + 1) {
			xPointer = x;
			yPointer = y;
			int nextX = randomPoints[i + 1].x;
			int nextY = randomPoints[i + 1].y;

			while (xPointer != nextX) {

				cout << endl << "xPointer: " << xPointer << " nextX: " << nextX << endl;

				if (xPointer > nextX)
					xPointer--;

				else if (xPointer < nextX)
					xPointer++;

				generatedMap[yPointer][xPointer][0] = EmptyPlaceId;
			}

			while (yPointer != nextY) {

				cout << endl << "yPointer: " << yPointer << " nextY: " << nextY << endl;

				if (yPointer > nextY)
					yPointer--;

				else if (yPointer < nextY)
					yPointer++;

				generatedMap[yPointer][xPointer][0] = EmptyPlaceId;
			}
		}	
	}



	this->_randomPoints = randomPoints;
	this->_generatedMapSize = mapSize;
	this->_generatedMap = generatedMap;
}