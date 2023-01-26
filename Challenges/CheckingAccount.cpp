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

std::ostream& operator<<(std::ostream& os, const CheckingAccount& account)
{
	os << "Checking Account name : " << account.getName() << std::endl << "balance: " << account.getBalance() << std::endl;
	return os;
}
