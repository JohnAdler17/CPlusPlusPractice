#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

void Account::SetName(string newname)
{
	name = newname;
}
void Account::SetTaxID(long newtaxID)
{
	taxID = newtaxID;
}
void Account::SetBalance(double newbalance)
{
	balance = newbalance;
}
string Account::GetName()
{
	return name;
}
long Account::GetTaxID()
{
	return taxID;
}
double Account::GetBalance()
{
	return balance;
}

// This function adds an amount to the current balance and stores the data in an array
void Account::MakeDeposit(double amount)
{
	if (numdeposits < 10)
	{
		last10deposits[numdeposits] = amount;
		SetBalance(amount);
		numdeposits++;
	}
	else
		for (int i = 9; i > 0; i--) {
			last10deposits[i] = last10deposits[i - 1];
		}
		last10deposits[0] = amount;
}
	

Account::Account()
{
	;
}
Account::Account(string newname, long newtaxID, double newbalance)
{
	name = newname;
	taxID = newtaxID;
	balance = newbalance;
	for (int i = 0; i < 10; i++) {
		last10deposits[i] = 0;
		last10withdraws[i] = 0;
	}
}
void Account::display()
{
	cout << endl << "Account name: " << GetName() << endl;
	cout << "Tax ID: " << GetTaxID() << endl;
	cout << "Balance: " << GetBalance() << endl;
}