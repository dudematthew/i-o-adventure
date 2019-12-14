class MapGenerator
{
public:
	MapGenerator(int size);
	int GetSize();
private: 
	int size;
};

MapGenerator::MapGenerator(int size) {
	this->size = size;
}

int MapGenerator::GetSize() {
	return this->size;
}

