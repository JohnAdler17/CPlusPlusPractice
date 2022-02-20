#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include "Savings.h"

using namespace std;

Savings::Savings() : Account()
{
	;
}

Savings::Savings(string name, long taxID, double balance) : Account(name, taxID, balance)
{
	;
}

// This function withdraws an amount from the savings balance and stores the data in an array
void Savings::DoWithdraw(double amount)
{
	if (numwithdraws < 10)
	{
		last10withdraws[numwithdraws] = amount;
		SetBalance(GetBalance() - amount);
		numwithdraws++;
	}
	else 
		for (int i = 9; i > 0; i--) {
			last10withdraws[i] = last10withdraws[i - 1];
		}
		last10withdraws[0] = amount;
}

// This function displays the number of withdrawals and deposits from the savings account
void Savings::display()
{
	if (numwithdraws > 0)
	{
		cout << "Savings Withdrawals (amount): " << endl;
		for (int i = 0; i < numwithdraws; i++)
		{
			cout << last10withdraws[i] << endl;
		}
	}
	else
		cout << "No existing withdrawls." << endl; cout << endl;

	if (numdeposits > 0)
	{
		cout << "Savings Deposit (amount): " << endl;
		for (int i = 0; i < numdeposits; i++)
		{
			cout << last10deposits[i] << endl;
		}
	}
	else
		cout << "No existing deposits." << endl; cout << endl;
}