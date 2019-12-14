namespace MapGenerator {
	/*
	* Class that generates array, that represents
	* the structure of the map based on parameters
	*/
	class MapGenerator {
	public:
		int size;

		MapGenerator(int size);
		void GenerateMap();
	private:
		
	};

	/*
	* Constructor
	* int size: size of generated map
	*/
	MapGenerator::MapGenerator(int size = 10) {
		this->size = size;
	}

	void MapGenerator::GenerateMap () {

	}


}

