#include "Account.h"


Account::Account(std::string accountName, double balance) 
	:name{ accountName }, balance{balance}
{
}

Account::~Account()
{
}

/*bool Account::Deposit(double amount)
{
	if (amount<0)
	{
		return false;
	}
	this->balance += amount;
	return true;
}*/

/*bool Account::Withdraw(double amount)
{
	if (balance-amount<0)
	{

		return false;
	}
	this->balance -= amount;
	return true;
}*/

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

