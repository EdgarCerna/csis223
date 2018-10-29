#pragma once
#ifndef ACCOUNT_H
#define	ACCOUNT_H

#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Account
{
public:
	Account();
	Account(string name, double amount);
	
	int		getAccountID()				const;
	string	getAccountHolder()			const;
	double	getBalance()				const;

	void setAccountHolder(string name);
	void setBalance(double amt);
	void depositAmount(double amt);
	void withdrawAmount(double amt);

	void displayAccountInfo()			const;
private:
	static int accountNumber;
	int			getNextAccountNumber()	const;

	int		accountID;
	string	accountHolder;
	double	balance;
};
#endif