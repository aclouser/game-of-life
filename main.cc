#include <iostream>
#include <string>
#include "cell.cc"

using namespace std;

int main()
{
	string intro;
	int width,height;
	width = 20;
	height = 20;
	intro = "Welcome to the Game of Life!\nThis simulation will run with a width of "
			+to_string(width)+ " cells, and a height of " +to_string(height)+ " cells.";
	cout << intro << endl;

	Cell c1(3,4,true);
	cout << "The coordinates of c1 are ("+c1.x+", "+c1.y+")" << endl;
	
	if(c1.state)
		cout << "And the cell c1 is alive." << endl;
	else
		cout << "And the cell c1 is dead." << endl;
	

	return 0;
}
