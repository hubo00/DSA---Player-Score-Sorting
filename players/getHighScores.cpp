#include <iostream>
#include <string>
#include <fstream>

void getHighScores() {

	std::string players[5];
	int scores[5];

	std::string inLine;
	std::ifstream inFile("scores.TXT");

	if (!inFile) {
		std::cout << "Couldn't open File";
	}
	else {
		std::string name;
		int score;
		int arrayIndex = 0;
		for (int lineNum = 0; lineNum < 10; lineNum++) {
			getline(inFile, inLine);
			if (lineNum % 2 == 0) {
				players[arrayIndex]

			}

		}
	}
}