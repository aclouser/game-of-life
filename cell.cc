#include "cell.h"

using namespace std;

Cell::Cell(int x, int y, bool state)
{
	this->x = x;
	this->y = y;
	this->state = state;
}

Cell::Cell()
{
	x=0;
	y=0;
	state=0;
}

void Cell::setState(bool newState)
{
	state = newState; 
}

bool Cell::checkNeighbors()
{

}

bool Cell::getState()
{
	return state;
}

string Cell::getCellInfo()
{
	string retString;
	retString = "x coordinate is " +to_string(x)+ "y coordinate is " +to_string(y)+ "and status is"
	+to_string(getState())+ ".";
	return retString;
}

