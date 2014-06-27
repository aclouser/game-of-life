#include "board.h"
#include <cstdlib> //for rand() and srand()
#include <ctime> // for time
 
using namespace std;

Board::Board(int width, int height)
{
	this->width = width;
	this->height = height;
	
	alive = ALIVE_CHARACTER;
	dead = DEAD_CHARACTER;
	createBoard_Random();
}

void Board::createBoard_Random()
{
	//set initial seed value for rand() to system clock
	srand(time(0));

	//Create set of columns 
	for(int x=0; x<width; x++)
	{
		vector<Cell> column;

		for(int y=0; y<height; y++)
		{
			Cell cell(x,y,((rand() % RAND_MODULUS)== 0));
			column.push_back(cell);
		}
		grid.push_back(column);
	}
	
	
}

void Board::printBoard()
{
	
	for(int y=0; y<height; y++)
	{
		for(int x=0; x<width; x++)
		{
			if(grid.at(x).at(y).getState())
				cout << alive << " ";
			else
				cout << dead << " ";
		}
		cout << endl;
	}
}

void Board::updateBoard()
{

}
