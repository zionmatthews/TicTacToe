// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <windows.h>
using namespace std;

const char* ESC = "\x1b";
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

char grid[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void Map()
{
	for (int i = 0; i < 3; i++)
	{
		// Used to indent the tic tac toe table twards the center
		std::cout << INDENT << INDENT << INDENT << INDENT << INDENT;
		for (int j = 0; j < 3; j++)
		{
			// The tic tac toe table
			cout << YELLOW << grid[i][j] << "[ ]" << RESET_COLOR;
		}
		cout << endl;
	}
}

bool enableVirtualTerminal() 
{
	// Set output mode to handle virtual terminal sequences
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hOut == INVALID_HANDLE_VALUE)
	{
		return false;
	}

	DWORD dwMode = 0;
	if (!GetConsoleMode(hOut, &dwMode))
	{
		return false;
	}

	dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	if (!SetConsoleMode(hOut, dwMode))
	{
		return false;
	}
	return true;
}


int main()
{
	if (enableVirtualTerminal() == false) {
		std::cout << "The virtual terminal processing mode could not be activated." << std::endl;
		std::cout << "Press 'Enter' to exit." << std::endl;
		std::cin.get();
		return false;
	}

	



	//Title of the game
	std::cout << TITLE << CYAN << "Welcome to TicTacToe v3" << RESET_COLOR << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	Map();

	std::cin.get();

	return 0;
	system("cls");
}

