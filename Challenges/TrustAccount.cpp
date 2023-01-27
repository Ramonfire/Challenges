#include "TrustAccount.h"



TrustAccount::TrustAccount(std::string accountName, double balance, double rate)
	:SavingsAccount(accountName,balance,rate),withdrawalCount{0}
{
}

TrustAccount::~TrustAccount()
{
}

void TrustAccount::print(std::ostream& os) const
{
	os << "Trust Account name : " << getName() << std::endl << "balance: " << getBalance() << std::endl << "Interest Rate: " << getInterestRate() << std::endl
		<< "Withdrawal left: " << (3-withdrawalCount) << std::endl;
}

bool TrustAccount::Deposit(double amount)
{
	if (amount < 0)
	{
		return false;
	}
	if (amount >5000.0)
	{
		amount += 50.0;
	}
	amount += (amount * interestRate/100);
	
	this->balance += amount;
	return true;
}



bool TrustAccount::Withdraw(double amount)
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
	if (balance - amount < 0)
	{

		return false;
	}

	++withdrawalCount;
	this->balance -= amount;
	return true;
	
}

