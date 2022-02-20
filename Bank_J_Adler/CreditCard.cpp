#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include "CreditCard.h"

using namespace std;

CreditCard::CreditCard() : Account()
{
	;
}
CreditCard::CreditCard(string name, long taxID, double balance)
{
	;
}

// This function lets the user take money from their credit account and stores the data in an array
void CreditCard::DebitCharge(string name, double amount)
{
	if (numwithdraws < 10)
	{
		last10charges[numwithdraws] = name;
		last10withdraws[numwithdraws] = amount;
		SetBalance(-amount);
		numwithdraws++;
	}
}

// This function lets the user make a deposit that is then stored in an array
void CreditCard::MakePayment(double amount)
{
	if (numdeposits < 10)
	{
		last10deposits[numdeposits] = amount;
		SetBalance(amount);
		numdeposits++;
	}
	else {
		for (int i = 9; i > 0; i--) {
			last10deposits[i] = last10deposits[i - 1];
		}
		last10deposits[0] = amount;
	}
}

// This function prints the number and amount of withdrawls and deposits
void CreditCard::display()
{
	if (numwithdraws > 0)
	{
		cout << "Account charges (name and amount): " << endl;
		for (int i = 0; i < numwithdraws; i++)
		{
			cout << last10charges[i] << " - " << last10withdraws[i] << endl;
		}
	}
	else
		cout << "No existing withdrawls." << endl;

	if (numdeposits > 0)
	{
		cout << "Credit Deposit (amount): " << endl;
		for (int i = 0; i < numdeposits; i++)
		{
			cout << last10deposits[i] << endl;
		}
	}
	else
		cout << "No existing deposits." << endl;
}