#include <vector>
#include <string>
using namespace std;

	/*
	* Class that generates array, that represents
	* the structure of the map based on parameters
	* structure format is [x][y][z], where z is
	* in range from 0 to 1
	* to generate map set mapSize member value, then
	* use generateMap method to generate
	* Access generated map by public member
	* generatedMap
	*/
	class MapGenerator {
	public:
		int mapSize;
		vector <vector <vector <int>>> generatedMap;

		MapGenerator(int size);
		void GenerateMap();
		string PreviewMap();
		int lastGeneratedMapSize();
	private:
		int _lastGeneratedMapSize;
	};

	/*
	* Constructor
	* int size: size of generated map (default 10)
	*/
	MapGenerator::MapGenerator(int size = 10) {
		this->mapSize = size;
		this->_lastGeneratedMapSize = 0;
	}

	/*
	* Preview generated map
	* returns string representation of generated map
	*/
	string MapGenerator::PreviewMap() {
		auto generatedMap = this->generatedMap;

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

	int MapGenerator::lastGeneratedMapSize() {
		return this->_lastGeneratedMapSize;
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
				z.push_back(0);
				z.push_back(-1);

				y.push_back(z);
			}
			x.push_back(y);
		}

		this->_lastGeneratedMapSize = mapSize;
		this->generatedMap = x;
	}

