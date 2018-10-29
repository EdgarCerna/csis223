#include "pch.h"
#include "Account.h"

int Account::accountNumber = 100000;
Account::Account()
{
	accountID = getNextAccountNumber();
	accountHolder = "no name";
	balance = 0.0;
}
Account::Account(string name, double amount)
{
	accountID = getNextAccountNumber();
	accountHolder = name;
	balance = amount;
}
int Account::getAccountID() const
{
	return accountID;
}
string	Account::getAccountHolder()	const
{
	return accountHolder;
}
double Account::getBalance() const
{
	return balance;
}
void Account::setAccountHolder(string name)
{
	accountHolder = name;
}
void Account::setBalance(double amt)
{
	balance = amt;
}
void Account::depositAmount(double amt)
{
	if (amt < 0)
		amt = 0;
	balance += amt;
}
void Account::withdrawAmount(double amt)
{
	balance -= fabs(amt);
}
void Account::displayAccountInfo() const
{
	cout << fixed << setprecision(2) << endl;
	cout << setw(8) << accountID << "  $ " << right << setw(9) << balance << "    " << right << accountHolder;
}
int	Account::getNextAccountNumber()	const
{
	return ++accountNumber;
}