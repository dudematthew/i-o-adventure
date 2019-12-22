#include <vector>
#include <string>
#include <math.h>
using namespace std;

class RandomPoint {
public:
	int x;
	int y;
	int roomSize;
};

	/*
	* Class that generates array, that represents
	* the structure of the map based on parameters
	* structure format is [y][x][z], where z is
	* in range from 0 to 1
	* to generate map set mapSize member value, then
	* use generateMap method to generate
	* Access generated map by public member
	* generatedMap
	*/
	class MapGenerator {
	public:
		int mapSize;

		MapGenerator(int size);
		void GenerateMap();
		string PreviewMap();
		int getGeneratedMapSize();
		vector <vector <vector <int>>> getGeneratedMap();
		vector <RandomPoint> getRandomPoints();
	private:
		int _generatedMapSize;
		vector <vector <vector <int>>> _generatedMap;
		vector <RandomPoint> _randomPoints;
	};

	/*
	* Constructor
	* int size: size of generated map (default 10)
	*/
	MapGenerator::MapGenerator(int size = 10) {
		this->mapSize = size;
		this->_generatedMapSize = 0;
	}

	/*
	* Preview generated map
	* returns string representation of generated map
	*/
	string MapGenerator::PreviewMap() {
		auto generatedMap = this->_generatedMap;

		string output;

		output.append("First layer:\n");
		for (int i = 0; i < generatedMap.size(); i++) {
			for (int j = 0; j < generatedMap[i].size(); j++) {
				output.append(to_string(generatedMap[i][j][0]));
				output.append(" ");
			}
			output.append("\n");
		}

		output.append("Second layer:\n");
		for (int i = 0; i < generatedMap.size(); i++) {
			for (int j = 0; j < generatedMap[i].size(); j++) {
				output.append(to_string(generatedMap[i][j][1]));
				output.append(" ");
			}
			output.append("\n");
		}

		return output;
	}

	/*
	* Returns last generated map size
	*/
	int MapGenerator::getGeneratedMapSize() {
		return this->_generatedMapSize;
	}

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
	* Generates by random a map, and saves it to 
	* generatedMap class variable
	*/
	void MapGenerator::GenerateMap () {
		int mapSize = this->mapSize;
		vector <vector <vector <int>>> generatedMap;

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

		vector <RandomPoint> randomPoints;

		// Generate random points coordinates and
		// save them to randomPoints 
		for (int i = 0; i < randomPointsAmount; i++) {
			RandomPoint randomPoint;

			randomPoint.x = (rand() % (mapSize - 2)) + 1;
			randomPoint.y = (rand() % (mapSize - 2)) + 1;

			randomPoint.roomSize = rand() % ((int)floor(sqrt(mapSize)));

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

