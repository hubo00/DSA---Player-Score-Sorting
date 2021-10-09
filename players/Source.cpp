// Hubert Bukowski | x00161897

/*
USAGE:			Modified
TITLE:			Reading and Processing a File Line by Line in C++
AUTHOR:			Q A
DATE:			24/MAR/2018
CODE VERSION:	N/A
AVAILABILITY:	https://www.systutorials.com/how-to-process-a-file-line-by-line-in-c/
*/

/*
USAGE:			Modified
TITLE:			C++ program to sort an array in Descending Order
AUTHOR:			IncludeHelp.com
DATE:			N/A
CODE VERSION:	N/A
AVAILABILITY:	https://www.includehelp.com/cpp-programs/sort-an-array-in-descending-order.aspx
*/
#include <iostream>
#include <string>

void getHighScores(std::string playerArray[], int scoreArray[]);

int main() {
	std::string players[5];
	int scores[5];
	getHighScores(players, scores);
	return 0;
}