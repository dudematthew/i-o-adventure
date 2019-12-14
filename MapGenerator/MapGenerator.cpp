#include "pch.h"
#include <iostream>
#include "MapGenerator.h"

using namespace std;

int main()
{
	MapGenerator generator(12);

	cout << generator.GetSize();
}
