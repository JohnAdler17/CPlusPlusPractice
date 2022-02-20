#ifndef SAVINGS_H
#define SAVINGS_H
#include "Account.h"

class Savings : public Account {
	public:
		void DoWithdraw(double amount);
		Savings();
		Savings(string name, long taxID, double balance);
		void display();
};

#endif