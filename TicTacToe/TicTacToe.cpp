// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <windows.h>
using namespace std;

const char* const TITLE = "\x1b[5;20H";
const char* const INDENT = "\x1b[5C";
const char* const GREEN = "\x1b[92m";
const char* const YELLOW = "\x1b[93m";
const char* const CYAN = "\x1b[96m";
const char* const RESET_COLOR = "\x1b[0m";

char grid[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
int c;

void Map()
{
	for (int i = 0; i < 3; i++)
	{

		// Used to indent the tic tac toe table twards the center
		std::cout << INDENT << INDENT << INDENT << INDENT << INDENT;
		for (int j = 0; j < 3; j++)
		{

			// The tic tac toe table
			cout << YELLOW << "[" << RESET_COLOR << GREEN << grid[i][j] << RESET_COLOR << YELLOW << "] " << RESET_COLOR;
		}
		cout << endl;
	}

}

void Input()
{
	//Input number
	int a;

	std::cout << std::endl;
	//Tells the players who turn it is.
	if (player == 'X') {
		std::cout << INDENT << INDENT << YELLOW << "Its Player 1's(X) turn." << RESET_COLOR << ::endl;
	}
	else if (player == 'O') {
		std::cout << INDENT << INDENT << YELLOW << "Its Player 2's(O) turn." << RESET_COLOR << ::endl;
	}




	std::cout << std::endl;
	//Informs  the players on how to play.
	cout << INDENT << INDENT << YELLOW << "type the number to fill the bracket: " << RESET_COLOR;

	cin >> a;

	if (a == 1) {
		//Checks to see if the bracket is in use
		if (grid[0][0] == '1') {
			grid[0][0] = player;
		}
		else {
			cout << YELLOW << "This bracket is already taken!" << RESET_COLOR << endl;
			Input();
		}
	}
	else if (a == 2) {
		//Checks to see if the bracket is in use
		if (grid[0][1] == '2') {
			grid[0][1] = player;
		}
		else {
			cout << YELLOW << "This bracket is already taken!" << RESET_COLOR << endl;
			Input();
		}
	}
	else if (a == 3) {
		//Checks to see if the bracket is in use
		if (grid[0][2] == '3') {
			grid[0][2] = player;
		}
		else {
			cout << YELLOW << "This bracket is already taken!" << RESET_COLOR << endl;
			Input();
		}
	}
	else if (a == 4) {
		//Checks to see if the bracket is in use
		if (grid[1][0] == '4') {
			grid[1][0] = player;
		}
		else {
			cout << YELLOW << "This bracket is already taken!" << RESET_COLOR << endl;
			Input();
		}
	}
	else if (a == 5) {
		//Checks to see if the bracket is in use
		if (grid[1][1] == '5') {
			grid[1][1] = player;
		}
		else {
			cout << YELLOW << "This bracket is already taken!" << RESET_COLOR << endl;
			Input();
		}
	}
	else if (a == 6) {
		//Checks to see if the bracket is in use
		if (grid[1][2] == '6') {
			grid[1][2] = player;
		}
		else {
			cout << YELLOW << "This bracket is already taken!" << RESET_COLOR << endl;
			Input();
		}
	}
	else if (a == 7) {
		//Checks to see if the bracket is in use
		if (grid[2][0] == '7') {
			grid[2][0] = player;
		}
		else {
			cout << YELLOW << "This bracket is already taken!" << RESET_COLOR << endl;
			Input();
		}
	}
	else if (a == 8) {
		//Checks to see if the bracket is in use
		if (grid[2][1] == '8') {
			grid[2][1] = player;
		}
		else {
			cout << YELLOW << "This bracket is already taken!" << RESET_COLOR << endl;
			Input();
		}
	}
	else if (a == 9) {
		//Checks to see if the bracket is in use
		if (grid[2][2] == '9') {
			grid[2][2] = player;
		}
		else {
			cout << YELLOW << "This bracket is already taken!" << RESET_COLOR << endl;
			Input();
		}
	}
	else if (a != 1, 2, 3, 4, 5, 6, 7, 8, 9) {
		cout << YELLOW << "Incorrect Input!" << RESET_COLOR << endl;
		Input();
	}
}

void Player()
{
	//When the value of X = player.
	//Change it to O.
	//Thats how player 1 and 2 work
	if (player == 'X') {
		player = 'O';
	}
	else
		player = 'X';
}

char Win()
{
	// Player 1 - X
	if (grid[0][0] == 'X' &&  grid[0][1] == 'X' && grid[0][2] == 'X')
		return 'X';

	if (grid[1][0] == 'X' &&  grid[1][1] == 'X' && grid[1][2] == 'X')
		return 'X';

	if (grid[2][0] == 'X' &&  grid[2][1] == 'X' && grid[2][2] == 'X')
		return 'X';

	if (grid[0][1] == 'X' &&  grid[1][1] == 'X' && grid[2][1] == 'X')
		return 'X';

	if (grid[0][2] == 'X' &&  grid[1][2] == 'X' && grid[2][2] == 'X')
		return 'X';

	if (grid[0][0] == 'X' &&  grid[1][1] == 'X' && grid[2][2] == 'X')
		return 'X';

	if (grid[2][0] == 'X' &&  grid[1][1] == 'X' && grid[0][2] == 'X')
		return 'X';

	// Player 2 - O
	if (grid[0][0] == 'O' &&  grid[0][1] == 'O' && grid[0][2] == 'O')
		return 'O';

	if (grid[1][0] == 'O' &&  grid[1][1] == 'O' && grid[1][2] == 'O')
		return 'O';

	if (grid[2][0] == 'O' &&  grid[2][1] == 'O' && grid[2][2] == 'O')
		return 'O';

	if (grid[0][1] == 'O' &&  grid[1][1] == 'O' && grid[2][1] == 'O')
		return 'O';

	if (grid[0][2] == 'O' &&  grid[1][2] == 'O' && grid[2][2] == 'O')
		return 'O';

	if (grid[0][0] == 'O' &&  grid[1][1] == 'O' && grid[2][2] == 'O')
		return 'O';

	if (grid[2][0] == 'O' &&  grid[1][1] == 'O' && grid[0][2] == 'O')
		return 'O';

	return '/';

	//This is how it works
	//00 01 02
	//10 11 12
	//20 21 22

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

void Title()
{
	//Title of the game
	std::cout << TITLE << CYAN << "Welcome to TicTacToe v3" << RESET_COLOR << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
}


int main()
{
	// Input for draw
	c = 0;

	//If the colors for the text do not load
	//Close the the program 
	if (enableVirtualTerminal() == false) {
		std::cout << "The virtual terminal processing mode could not be activated." << std::endl;
		std::cout << "Press 'Enter' to exit." << std::endl;
		std::cin.get();
		return false;
	}

	Title();

	while (1)
	{
		c++;
		Map();
		Input();
		system("cls");
		Title();
		Player();

		//If Player 1 wins
		if (Win() == 'X') {
			cout << "Player 1 Wins" << endl;
			std::cout << "Press Enter to exit." << std::endl;
			std::cin.get();
			break;
		}
		//If Player 2 wins
		else if (Win() == 'O') {
			cout << "Player 2 Wins" << endl;
			std::cout << "Press Enter to exit." << std::endl;
			std::cin.get();
			break;
		}
		//If the game ends in a draw
		else if (Win() == '/' && c == 9) {
			cout << "Draw, nobody wins. :(" << endl;
			std::cout << "Press Enter to exit." << std::endl;
			std::cin.get();
			break;
		}
	}
	std::cin.get();
	return 0;
}

