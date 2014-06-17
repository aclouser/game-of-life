#include <iostream>
#include <string>
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
}
