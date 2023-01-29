#include "Account.h"


Account::Account(std::string accountName, double balance) 
	:name{ accountName }, balance{balance}
{
	if (balance<0)
	{
		throw IllegalBalanceException();
	}
}

Account::~Account()
{
	std::cout << "Account destructor " << std::endl;
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
		throw InsufficentFundsException();
	}
	this->balance -= amount;
	return true;
}

void Account::print(std::ostream& os) const
{
	os << "Account name : " << this->getName() << std::endl << "balance" << this->getBalance() << std::endl;
}

double Account::getBalance() const
{
	return balance;
}

std::string Account::getName() const
{
	return name;
}

