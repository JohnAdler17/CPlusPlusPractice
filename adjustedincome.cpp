// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	bool single_or_married;
	double taxable_income;

	cout << "Are you single or married? (0 for single, 1 for married) ";
	cin >> single_or_married;

	cout << "What is your taxable income? ";
	cin >> taxable_income;

	if (single_or_married == 0)
	{
		if (taxable_income <= 8000)
		{
			taxable_income = taxable_income - (taxable_income*.1);
		}
		else if (8000 < taxable_income <= 32000)
		{
			taxable_income = taxable_income - (800 + ((taxable_income - 8000) * .15));
		}
		else if (32000 < taxable_income)
		{
			taxable_income = taxable_income - (4400 + ((taxable_income - 32000) * .25));
		}
	}
	else if (single_or_married == 1)
	{
		if (taxable_income <= 16000)
		{
			taxable_income = taxable_income - (taxable_income*.1);
		}
		else if (16000 < taxable_income <= 64000)
		{
			taxable_income = taxable_income - (1600 + ((taxable_income - 16000) * .1));
		}
		else if (taxable_income > 64000)
		{
			taxable_income = taxable_income - (8800 + ((taxable_income - 64000) * .25));
		}
	}
	cout << "The final income after controlling for taxes is: " << taxable_income << endl;
	return 0;
}
