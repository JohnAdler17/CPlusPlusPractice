#ifndef CREDITCARD_H
#define CREDITCARD_H
#include "Account.h"

class CreditCard : public Account {
	private:
		long cardnumber;
		string last10charges[10];
	public:
		void DebitCharge(string name, double amount);
		void MakePayment(double amount);
		CreditCard();
		CreditCard(string name, long taxID, double balance);
		void display();
};

#endif
