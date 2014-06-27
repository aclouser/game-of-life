#include <iostream>
#include <cstdlib>
#include "board.h"
#include "cell.h"

using namespace std;

int main()
{
	string intro;
	int width,height;
	width = 20;
	height = 10;

	intro = "Welcome to the Game of Life!\nThis simulation will run with a width of "
			+to_string(width)+ " cells, and a height of " +to_string(height)+ " cells.";
	cout << intro << endl << endl;

	Board b(width, height);
	b.printBoard();	

	return 0;
}



