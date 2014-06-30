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

void Cell::setState(bool nextState)
{
	state = nextState; 
}

bool Cell::getState()
{
	return state;
}

bool Cell::checkNeighbors(bool **temp, int width, int height)
{
	int count = 0;

	if(y>0 && x>0)
	{
		if(temp[y-1][x-1])
			count++;
	}
	if(y>0)
	{
		if(temp[y-1][x])
			count++;
	}
	if(y>0 && x<width-1)
	{
		if(temp[y-1][x+1])
			count++;
	}
	if(x>0)
	{
		if(temp[y][x-1])
			count++;
	}
	if(x<width-1)
	{
		if(temp[y][x+1])
			count++;
	}
	if(y<height-1 && x>0)
	{
		if(temp[y+1][x-1])
			count++;
	}
	if(y<height-1)
	{
		if(temp[y+1][x])
			count++;
	}
	if(y<height-1 && x<width-1)
	{
		if(temp[y+1][x+1])
			count++;
	}
	if(state && (count==2 || count==3))
		return 1;
	else if(state && (count<2 || count>3))
		return 0;
	else if(!state && count==3)
		return 1;
	else
		return 0;
	
}


string Cell::getCellInfo()
{
	string retString;
	retString = "x coordinate is " +to_string(x)+ "y coordinate is " +to_string(y)+ "and status is"
	+to_string(getState())+ ".";
	return retString;
}

