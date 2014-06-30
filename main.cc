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
	char yesOrNo;

	intro = "Welcome to the Game of Life!\nThis simulation will run with a width of "
			+to_string(width)+ " cells, and a height of " +to_string(height)+ " cells.";
	cout << intro << endl << endl;

	Board b(width, height);
	b.printBoard();	
	
	do
	{
		cout << "Do you want to continue to the next generation?  y/n" << endl;
		cin >> yesOrNo;
		if(yesOrNo == 'y')
		{
			b.updateBoard();
			b.printBoard();
		}
	}
	while(yesOrNo == 'y');
	return 0;
}



