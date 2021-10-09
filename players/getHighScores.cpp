#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void getHighScores(std::string playerArray[], int scoreArray[]) {

	// Initialise necessary variables and constants
	const int NUMSCORES = 5;
	
	// Initialise ifstream inFile and string inLine for reading file 'scores.txt'
	std::string inLine;
	std::ifstream inFile("scores.TXT");
	
	// Print message if file not found, else populate arrays with lines from file
	if (!inFile) {
		std::cout << "Error: File not found";
	}
	else {
		std::string score;
		int arrayIndex = 0;
		// Iterates through the file, retrieving each line into their respective array
		for (int lineNum = 0; lineNum < 10; lineNum++) {
			getline(inFile, inLine);
			if (lineNum % 2 == 0) {
				playerArray[arrayIndex] = inLine;
			}
			else {
				std::stringstream convert(inLine);
				convert >> scoreArray[arrayIndex];
				arrayIndex++; // increments index value for arrays ( arrays are size 5 and we are looping 10 times )
			}
		}

		// Sorts the arrays in descending order
		int tempScore;
		std::string tempPlayer;
		for (int i = 0; i < NUMSCORES - 1; i++) {
			for (int j = i + 1; j < NUMSCORES; j++) {
				if (scoreArray[j] > scoreArray[i]) {
					tempScore = scoreArray[i];
					tempPlayer = playerArray[i];

					scoreArray[i] = scoreArray[j];
					playerArray[i] = playerArray[j];

					scoreArray[j] = tempScore;
					playerArray[j] = tempPlayer;
				}
			}
		}

		// Print out top three players to the screen
		std::cout << "Top three players" << std::endl;
		for (int i = 0; i < 3; i++) {
			std::cout << playerArray[i] << std::endl;
			std::cout << scoreArray[i] << std::endl;
		}
	}
}