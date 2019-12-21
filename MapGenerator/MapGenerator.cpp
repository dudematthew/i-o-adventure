#include "pch.h"
#include <iostream>
#include "MapGenerator.h"

using namespace std;

int main()
{
	MapGenerator generator(12);
	generator.GenerateMap();

	auto generatedMap = generator.generatedMap;

	for (int i = 0; i < generatedMap.size(); i++) {
		cout << "x[";
		for (int j = 0; j < generatedMap[j].size(); j++) {
			cout << "y";
		}
		cout << "]";
	}
}
