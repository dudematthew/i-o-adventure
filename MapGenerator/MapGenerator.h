namespace MapGenerator {
	/*
	* Class that generates array, that represents
	* the structure of the map based on parameters
	*/
	class MapGenerator {
	public:
		int mapSize;

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

	void MapGenerator::GenerateMap () {
		int mapSize = this->mapSize;
		int* mapData = new int[mapSize];

		for (int i = 0; i < mapSize; i++) {
			int* row = new int[mapSize];
			for (int j = 0; j < mapSize; j++) {

			}
			mapData[i] = row;
		}
	}


}

