#include "TrustAccount.h"



TrustAccount::TrustAccount(std::string accountName, double balance, double rate)
	:SavingsAccount(accountName,balance,rate),withdrawalCount{0}
{
}

TrustAccount::~TrustAccount()
{
}

bool TrustAccount::Deposit(double amount)
{
	if (amount >5000.0)
	{
		amount += 50.0;
	}
	return SavingsAccount::Deposit(amount);
}

bool TrustAccount::Withdrawl(double amount)
{
	if ( withdrawalCount >= 3 )
	{
		std::cout << "max withdrawal this year" << std::endl;
		return false;
	}
	if (amount <= (balance * 0.2))
	{
		std::cout << "Balance is too high!" << std::endl;
		return false;
	}

	withdrawalCount++;
	return SavingsAccount::Withdraw(amount);
	
	return false;
}
