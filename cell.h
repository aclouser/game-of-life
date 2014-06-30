#ifndef CELL_H
#define CELL_H
#include <iostream>
#include <string>

using namespace std;

class Cell
{
	int x,y;
	bool state;
 
	public:
    	Cell(int x, int y, bool state);
		Cell();
		bool checkNeighbors(bool **temp, int width, int height);
		string getCellInfo();
		bool getState();
		void setState(bool nextState);
};
#endif
