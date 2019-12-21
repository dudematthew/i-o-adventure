#include <vector>
using namespace std;

	/*
	* Class that generates array, that represents
	* the structure of the map based on parameters
	* structure format is [x][y][z][id]
	*/
	class MapGenerator {
	public:
		int mapSize;
		vector <vector <vector <int>>> generatedMap;

		MapGenerator(int size);
		void GenerateMap();
	private:
		
	};

	/*
	* Constructor
	* int size: size of generated map
	*/
	MapGenerator::MapGenerator(int size = 10) {
		this->mapSize = size;
	}

	/*
	* Generates by random a map, and saves it to 
	* generatedMap class variable
	*/
	void MapGenerator::GenerateMap () {
		int mapSize = this->mapSize;
		vector <vector <vector <int>>> x;

		for (int i = 0; i < mapSize; i++) {
			vector <vector <int>> y;
			for (int j = 0; j < mapSize; j++) {
				vector <int> z;
				for (int k = 0; k < 1; k++) {
					z.push_back(0);
				}
				y.push_back(z);
			}
			x.push_back(y);
		}

		this->generatedMap = x;
	}

