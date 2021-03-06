/* 
# Name: John Adler
# Date: 4/26/2018
# Class: CS142# Pledge: I have neither given nor received unauthorized aid on this program. 
# Description: This program lets a user access a bank account and edit/view their balances.
# Input: The user types amounts to withdraw or deposit to the account.
# Output:The program will display a menu with options for the user to choose from. These options let the user edit the account.
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include "Account.h"
#include "Checking.h"
#include "Savings.h"
#include "CreditCard.h"

using namespace std;

int main()
{
	Checking checkingacct("John", 5555555555, 100.00);
	CreditCard creditacct("John", 5555555555, 100.00);
	Savings savingsacct("John", 5555555555, 100.00);
	while (true)
	{
		cout << "Rhodes Financial Plus." << endl;
		cout << "**********************************" << endl;
		cout << "Select an option from the menu displayed below." << endl;
		cout << "1. Savings Deposit" << endl;
		cout << "2. Savings Withdrawl" << endl;
		cout << "3. Checking Deposit" << endl;
		cout << "4. Write a Check" << endl;
		cout << "5. Credit Card Payment" << endl;
		cout << "6. Make a Charge" << endl;
		cout << "7. Display Savings" << endl;
		cout << "8. Display Checking" << endl;
		cout << "9. Display Credit Card" << endl;
		cout << "10. Exit" << endl;
		int numSelect = 0;
		char ch[10];
		string str;

		cout << "Enter menu selection here: ";
		cin >> numSelect;
		while (numSelect < 1 || numSelect > 10)
		{
			cout << "Invalid menu number. Try again: ";
			cin >> numSelect;
		}
		if (numSelect == 1) 
		{
			cout << endl;
			cout << "Enter saving deposit amount :" << endl;
			cin >> ch;
			creditacct.MakeDeposit(strtod(ch, NULL));
			
		}
		else if (numSelect == 2) 
		{
			cout << endl; 
			cout << "Enter saving withdrawals amount:";
			cin >> ch;
			savingsacct.DoWithdraw(strtod(ch, NULL));
		}
		else if (numSelect == 3) 
		{
			cout << endl; 
			cout << "Enter checking deposit amount :";
			cin >> ch;
			checkingacct.MakeDeposit(strtod(ch, NULL));
		}
		else if (numSelect == 4) 
		{
			cout << endl; 
			cout << "Enter check number :";
			cin >> str;
			cout << endl; 
			cout << "Enter check amount :";
			cin >> ch;
			checkingacct.WriteCheck(stoi(str, NULL), strtod(ch, NULL));
		}
		else if (numSelect == 5) 
		{
			cout << endl; 
			cout << "Enter Credit card payment amount :";
			cin >> ch;
			creditacct.MakePayment(strtod(ch, NULL)); 
		}
		else if (numSelect == 6) 
		{  
			cout << endl; 
			cout << "Enter charge for :";
			cin >> str;
			cout << endl; 
			cout << "Enter charge amount :";
			cin >> ch;
			creditacct.DebitCharge(str, strtod(ch, NULL));
		}
		else if (numSelect == 7) 
		{ 
			cout << endl; 
			savingsacct.display();
		}
		else if (numSelect == 8) 
		{
			cout << endl; 
			checkingacct.display();
		}
		else if (numSelect == 9) 
		{
			cout << endl; 
			creditacct.display();
		}
		else if (numSelect == 10) { break; } // This while loop will loop until 10 is input to the menu, breaking out of the loop and ending the program

	}
	return 0;
}

