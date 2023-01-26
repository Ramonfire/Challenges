#include "Account.h"


Account::Account(std::string accountName, double balance) 
	:name{ accountName }, balance{balance}
{
}

Account::~Account()
{
}

bool Account::Deposit(double amount)
{
	if (amount<0)
	{
		return false;
	}
	this->balance += amount;
	return true;
}

bool Account::Withdraw(double amount)
{
	if (balance-amount<0)
	{

		return false;
	}
	this->balance -= amount;
	return true;
}

double Account::getBalance() const
{
	return balance;
}

std::string Account::getName() const
{
	return name;
}

std::ostream& operator<<(std::ostream& os, const Account& account)
{
	os << "Account name : " <<   account.getName() << std::endl << "balance" << account.getBalance() << std::endl;
	return os;
}
