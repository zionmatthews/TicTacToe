// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const char* const CLEAR = "\x1b[2J\x1b[H";
const char* const CSI = "\x1b[";
const char* const TITLE = "\x1b[5;20H";
const char* const INDENT = "\x1b[5C";
const char* const RED = "\x1b[91m";
const char* const GREEN = "\x1b[92m";
const char* const YELLOW = "\x1b[93m";
const char* const BLUE = "\x1b[94m";
const char* const MAGENTA = "\x1b[95m";
const char* const CYAN = "\x1b[96m";
const char* const WHITE = "\x1b[97m";
const char* const RESET_COLOR = "\x1b[0m";

char grid[3][3] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

void Map()
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << INDENT << INDENT << INDENT << INDENT << INDENT;
		for (int j = 0; j < 3; j++)
		{
			cout << YELLOW << grid[i][j] << "[ ]" << RESET_COLOR;
		}
		cout << endl;
	}
}


int main()
{


	std::cout << TITLE << CYAN << "Welcome to TicTacToe v3" << RESET_COLOR << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	Map();
	
	return 0;
	system("cls");

	
}

