#include <iostream>

using namespace std;

class Board
{
	Cell **grid;
	int width, height;
	

	public:
		Board(int width, int height);
		void createBoard_Random();
		void printBoard();
		void updateBoard();

};
