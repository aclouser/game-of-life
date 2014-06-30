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
// This function updates the board for the next generation
void Board::updateBoard()
{
	bool **tempStates;
	tempStates = new bool*[height];
	for(int i=0; i<height; i++)
		tempStates[i] = new bool[width];
	
	//This for loop scans the grid and places the states in the tempStates array
	for(int y=0; y<height; y++)
	{
		for(int x=0; x<width; x++)
		{
			tempStates[y][x] = grid.at(x).at(y).getState();
		}
	}

	//This loop calls checkNeighbors from each cell and changes the state of each cell
	for(int y=0; y<height; y++)
	{
		for(int x=0; x<width; x++)
		{
			grid.at(x).at(y).setState(grid.at(x).at(y).checkNeighbors(tempStates, width, height));
		}
	}

}












