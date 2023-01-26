#include "CheckingAccount.h"



CheckingAccount::CheckingAccount(std::string name, double balance)
	:Account(name,balance)
{
}

CheckingAccount::~CheckingAccount()
{
}

bool CheckingAccount::Withdraw(double amount)
{
	amount += dfFee;
	return Account::Withdraw(amount);
}
