#ifndef CHECKING_H
#define CHECKING_H
#include "Account.h"

class Checking : public Account {
	private: 
		int last10checks[10];
		double chkbalance;

	public:
		void WriteCheck(int checknum, double amount);
		Checking();
		Checking(string name, long taxID, double balance);
		void display();
};

#endif