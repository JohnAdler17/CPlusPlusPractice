#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using namespace std;

class Account {
	private:
		string name;
		long taxID;
		double balance;
	protected:
		double last10withdraws[10];
		double last10deposits[10];
		int numdeposits = 0;
		int numwithdraws = 0;
	public:
		void SetName(string name);
		void SetTaxID(long taxID);
		void SetBalance(double balance);
		string GetName();
		long GetTaxID();
		double GetBalance();
		void MakeDeposit(double amount);
		Account();
		Account(string name, long taxID, double balance);
		void display();
};


#endif