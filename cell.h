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
     	void setState(bool newState);
		bool checkNeighbors();
		string getCellInfo();
		bool getState();
};
#endif
