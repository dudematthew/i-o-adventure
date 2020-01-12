#include "pch.h"
#include "MapGenerator.h"

/*
	Preview generated map
	returns string representation of generated map
*/
string MapGenerator::PreviewMap(bool showTop = true) {
	auto generatedMap = this->_generatedMap;

	string output;

	output.append("First layer:\n");
	for (int i = 0; i < generatedMap.size(); i++) {
		for (int j = 0; j < generatedMap[i].size(); j++) {
			if (generatedMap[i][j][0] == 1)
				output.append(" ");
			else
				output.append("X");

			if (generatedMap[i][j][0] >= 0)
				output.append(" ");
		}
		output.append("\n");
	}
	
	if (showTop) {
		output.append("Second layer:\n");
		for (int i = 0; i < generatedMap.size(); i++) {
			for (int j = 0; j < generatedMap[i].size(); j++) {
				output.append(to_string(generatedMap[i][j][1]));
				if (generatedMap[i][j][1] >= 0)
					output.append(" ");
			}
			output.append("\n");
		}
	}

	return output;
}



