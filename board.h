#ifndef BOARD_H
#define BOARD_H
#define ALIVE_CHARACTER 48
#define DEAD_CHARACTER 45
#define RAND_MODULUS 2
#include <iostream>
#include "cell.h"
#include <vector>

using namespace std;

class Board
{
	int width, height;
	void createBoard_Random();
	char alive;
	char dead;
	vector<vector<Cell>> grid;
	

	public:
		Board(int width, int height);
		void printBoard();
		void updateBoard();

};
#endif
