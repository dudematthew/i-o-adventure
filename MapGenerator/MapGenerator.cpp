#include "pch.h"
#include <iostream>
#include "MapGenerator.h"
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "pl_PL");

	bool stop = false;
	string answer;

	while (!stop) {
		MapGenerator generator(24, 24);
		generator.GenerateMap();

		cout << generator.PreviewMap(0);

		cout << "Kontynuować? t / *\n>";
		cin >> answer;

		if (answer != "t")
			stop = true;
	}
	
}
