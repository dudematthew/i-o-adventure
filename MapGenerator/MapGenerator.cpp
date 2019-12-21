#include "pch.h"
#include <iostream>
#include "MapGenerator.h"
#include <string>

using namespace std;

int main()
{
	MapGenerator generator(12);
	generator.GenerateMap();

	cout << generator.PreviewMap();
}
