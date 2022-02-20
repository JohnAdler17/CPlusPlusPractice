#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include "Checking.h"

using namespace std;

Checking::Checking() : Account()
{
}

Checking::Checking(string newname, long newtaxID, double newbalance)
{
	SetName(newname);
	SetTaxID(newtaxID);
	SetBalance(newbalance);
	for (int i = 0; i < 10; i++) {
		last10checks[i] = 0;
	}
}

// This function allows the user to write a check taking from the checking balance and stores the data in an array
void Checking::WriteCheck(int checknum, double amount)
{
	chkbalance = chkbalance - amount;
	for (int i = 0; i < 9; i++) {
		last10checks[i] = last10checks[i - 1];
	}
	last10checks[0] = chkbalance;
	numwithdraws++;
}

// This function displays the number of checking withdraws and deposits
void Checking::display()
{
	if (numwithdraws > 0)
	{
		
		cout << "Checking Withdrawals Number: " << numwithdraws << endl;
		cout << "Checking Withdrawals Amount: " << last10checks[numwithdraws] << endl;
		for (int i = 0; i < numwithdraws; i++)
		{
			cout << last10checks[i] << " - " << last10withdraws[i] << endl;
		}
	}
	else
		cout << "No existing withdrawls." << endl;

	if (numdeposits > 0)
	{
		cout << "Checking Deposit (amount): " << endl;
		for (int i = 0; i < numdeposits; i++)
		{
			cout << last10deposits[i] << endl;
		}
	}
	else
		cout << "No existing deposits." << endl;
}