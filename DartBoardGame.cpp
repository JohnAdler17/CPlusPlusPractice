/* Name: John Adler
# Date: 02/12/2018
# Class: CS142
# Pledge: I have neither given nor received unauthorized aid on this program.
# Description: This program allows two players to play a dart board game. Each player inputs the x and y coordinates
#              of where their 3 darts landed on the board, the coordinates are converted to a score, and then each player's 
#              total score is printed, along with who won the game.
# Input: The two players each input 3 sets of x and y coordinates for where each dart hit the board.
# Output: The total scores of both players and the winner of the game is printed.
*/

#include "stdafx.h"
#include <cmath>
#include <iostream>

using namespace std;

double x_int;
double y_int;
int singleScore;
int Player1Score = 0;
int Player2Score = 0;

/*
# This function converts the dart's x and y coordinates to a score in points.
# Parameters: x_int, the x coordinate of a dart. y-int, the y coordinate of a dart.
# Returns: A score corresponding to where the dart landed on the dart board.
*/
int score(double x_int, double y_int)
{
	double DistanceToCenter = sqrt(pow(x_int, 2) + pow(y_int, 2)); //Uses the quadratic formula to find the distance to the center of the dart board
	if (DistanceToCenter <= 3)
		singleScore = 100;
	else if ((3 < DistanceToCenter) && (DistanceToCenter <= 6))
		singleScore = 80;
	else if ((6 < DistanceToCenter) && (DistanceToCenter <= 9))
		singleScore = 60;
	else if ((9 < DistanceToCenter) && (DistanceToCenter <= 12))
		singleScore = 40;
	else if ((12 < DistanceToCenter) && (DistanceToCenter <= 15))
		singleScore = 20;
	else if (15 < DistanceToCenter)
		singleScore = 0;
	return singleScore;
}

/*
# This function computes the total score of Player 1 depending on where their darts landed.
# Parameters: no parameters
# Returns: The total score of Player 1.
*/
int Player_1_Turn()
{
	int count = 1;
	cout << "It's Player 1's Turn!" << endl;
	while (count <= 3)
	{
		cout << "Enter dart " << count << "'s landing coordinates (in the format 'x y'): ";
		cin >> x_int >> y_int;
		score(x_int, y_int);
		Player1Score = Player1Score + singleScore;
		count = count + 1;
	}
	return Player1Score;
}

/*
# This function computes the total score of Player 2 depending on where their darts landed.
# Parameters: no parameters
# Returns: The total score of Player 2.
*/
int Player_2_Turn()
{
	int count = 0;
	cout << "It's Player 2's Turn!" << endl;
	while (count <= 2)
	{
		cout << "Enter dart " << count << "'s landing coordinates (in the format 'x y'): ";
		cin >> x_int >> y_int;
		score(x_int, y_int);
		Player2Score = Player2Score + singleScore;
		count = count + 1;
	}
	return Player2Score;
}

/*
# This function compares the scores of Player 1 and 2 and determines who wins.
# Parameters: Player1Score, the total score of Player 1. Player2Score, the total score of Player 2.
# Returns: no returns.
*/
void who_wins(int Player1Score, int Player2Score)
{
	cout << "Player 1 Scored: " << Player1Score << endl;
	cout << "Player 2 Scored: " << Player2Score << endl;
	if (Player1Score > Player2Score)
		cout << "Player 1 Wins!!!" << endl;
	else if (Player1Score < Player2Score)
		cout << "Player 2 Wins!!!" << endl;
	else if (Player1Score == Player2Score)
		cout << "It's a TIE!" << endl;
}

int main()
{
	Player_1_Turn();
	Player_2_Turn();
	who_wins(Player1Score, Player2Score);
	return 0;
}

