#include "board.h"

using namespace std;

void board::makeBoard(string arr[][COLS])
{
	// fill board with '[ ]'
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = "[ ]";
		}
	}

}

void board::displayBoard(string arr[][COLS])
{
	// Create fancy header for the game.
	cout << "-------------------------------------\n";
	cout << " ####    #   ##### ##### #     #####\n";
	cout << " #   #  # #    #     #   #     #\n";
	cout << " ####  #####   #     #   #     ###\n";
	cout << " #   # #   #   #     #   #     #\n";
	cout << " ####  #   #   #     #   ##### #####\n";
	cout << "\n";
	cout << "        #### #   # ##### ####\n";
	cout << "       #     #   #   #   #   #\n";
	cout << "        ###  #####   #   ####\n";
	cout << "           # #   #   #   #\n";
	cout << "       ####  #   # ##### #\n";
	cout << "-------------------------------------\n";
	cout << "       Welcome to BATTLESHIP \n";
	cout << "-------------------------------------\n";
	cout << "     1  2  3  4  5  6  7  8  9  10\n";
	for (int x = 0; x < ROWS; x++)
	{
		cout << "  " << (char(x + 65)) << " ";
		for (int y = 0; y < COLS; y++)
		{
			cout << arr[x][y];
		}

		cout << endl;
	}
	
	// Display ship names and sizes to keep track during testing.
	bool displaySizes = true;
	if (displaySizes == true)
	{
		cout << endl;
		cout << "Ship names and sizes:\n";
		cout << "Frigate: 2\n";
		cout << "Sub 3\n";
		cout << "Destroyer 3\n";
		cout << "Battleship 4\n";
		cout << "Aircraft Carrier 5\n";

	}
}