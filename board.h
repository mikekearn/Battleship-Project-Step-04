#ifndef board_h
#define board_h

#include <string>
#include <iostream>

using namespace std;


class board
{
private:
	static const int ROWS = 10;
	static const int COLS = 10;


public:
	void makeBoard(string arr[][COLS]);
	void displayBoard(string arr[][COLS]);
};

#endif // !board_h