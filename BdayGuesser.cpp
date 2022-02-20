/*
Name: John Adler
Date: 01/29/18
Assignment: Birthday Guessing Game
Course Section: CS142-01
Program Description: This program counts to the number of the birthday of the player depending on where his birthday number appears
in five different sets of dates. The player will type either a 0 for no or a 1 for yes if their birth date appeared when prompted
with each set of numbers, and a specific number is added to the birthday total depending on the particular set. Once the player has
input for each of the five cards, a gramatically correct message will display telling the player what day their birthday is on. This
program also displays an error message if the player enters 0 for all five digits, since 0 is not a valid day on a calendar.
*/

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int birthday = 0;
	bool yes_or_no; // defines the variable yes_or_no as a boolean expression

	cout << "BIRTHDAY GUESSING GAME" << endl << "This game will correctly guess the birthday of the player after" <<
		endl << "determining which sets of numbers their birthday is in." << endl;
	
	cout << "Is your birthday in Set 1?" << endl;

	cout << "1 3 5 7" << endl << "9 11 13 15" << endl << "17 19 21 23" << endl << "25 27 29 31" << endl; // outputs card 1

	cout << "Enter 0 for no and 1 for yes: ";

	cin >> yes_or_no; // assigns variable yes_or_no to either a 0 or 1 depending on user input

	cout << endl;

	if (yes_or_no == 1) // if the user inputs 1 for the yes_or_no variable, the variable birthday is set to 1
	{
		birthday = 1;
	}

	cout << "Is your birthday in Set 2?" << endl;

	cout << "2 3 6 7" << endl << "10 11 14 15" << endl << "18 19 22 23" << endl << "26 27 30 31" << endl;

	cout << "Enter 0 for no and 1 for yes: ";

	cin >> yes_or_no;

	cout << endl;

	if (yes_or_no == 1) // if the user inputs 1 for the yes_or_no variable, 2 is added to the variable birthday
	{
		birthday = birthday + 2;
	}

	cout << "Is your birthday in Set 3?" << endl;

	cout << "4 5 6 7" << endl << "12 13 14 15" << endl << "20 21 22 23" << endl << "28 29 30 31" << endl;

	cout << "Enter 0 for no and 1 for yes: ";

	cin >> yes_or_no;

	cout << endl;

	if (yes_or_no == 1)
	{
		birthday = birthday + 4;
	}

	cout << "Is your birthday in Set 4?" << endl;

	cout << "8 9 10 11" << endl << "12 13 14 15" << endl << "24 25 26 27" << endl << "28 29 30 31" << endl;

	cout << "Enter 0 for no and 1 for yes: ";

	cin >> yes_or_no;

	cout << endl;

	if (yes_or_no == 1)
	{
		birthday = birthday + 8;
	}

	cout << "Is your birthday in Set 5?" << endl;

	cout << "16 17 18 19" << endl << "20 21 22 23" << endl << "24 25 26 27" << endl << "28 29 30 31" << endl;

	cout << "Enter 0 for no and 1 for yes: ";

	cin >> yes_or_no;

	cout << endl;

	if (yes_or_no == 1)
	{
		birthday = birthday + 16;
	}

	// This next if statement determines if all values entered were 0, and outputs an error message if they were
	if (birthday == 0)
	{
		cout << "Error: Date not Valid (0 cannot be the date of a month)" << endl << "Rerun Program to Try Again" << endl;
	}

	// The following if statements determine the correct ordinal indicator to apply to the birthday date in the final cout statement

	if ((birthday == 1) || (birthday == 21) || (birthday == 31)) // if the birthday is 1, 21, or 31, "st!" is added to the cout statement
	{
		cout << "Your birthday is on the " << birthday << "st!" << endl;
	}

	if ((birthday == 2) || (birthday == 22)) // if the birthday is 2 or 22, "nd!" is added to the cout statement
	{
		cout << "Your birthday is on the " << birthday << "nd!" << endl;
	}

	if ((birthday == 3) || (birthday == 23)) // if the birthday is 3 or 33, "rd!" is added to the cout statement
	{
		cout << "Your birthday is on the " << birthday << "rd!" << endl;
	}

	if (((birthday % 10 != 1) && (birthday % 10 != 2) && (birthday % 10 != 3) && (birthday != 0)) || (birthday == 11) || (birthday == 12) || (birthday == 13)) // this statement determines if the cout statement will end in "th!"
	{
		cout << "Your birthday is on the " << birthday << "th!" << endl;
	}
	cout << "The program will now close." << endl;
}