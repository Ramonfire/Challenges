#include "CheckingAccount.h"



CheckingAccount::CheckingAccount(std::string name, double balance)
	:Account(name,balance)
{
}

CheckingAccount::~CheckingAccount()
{
	
}

void CheckingAccount::print(std::ostream& os) const
{
	os << "Checking Account name : " << getName() << std::endl << "balance: " << getBalance() << std::endl;
}

 bool CheckingAccount::Withdraw(double amount)
{
	 amount += dfFee;
	 return Account::Withdraw(amount);
}

 bool CheckingAccount::Deposit(double amount)
 {
	 return Account::Deposit(amount);
 }

std::ostream& operator<<(std::ostream& os, const CheckingAccount& account)
{
	
	return os;
}
