#ifndef _SAVINGS_ACCOUNT_H
#define _SAVINGS_ACCOUNT_H
#include"Account.h"

class SavingsAccount:public Account
{
	friend std::ostream& operator<<(std::ostream& os, const SavingsAccount& account);
public:
	SavingsAccount(std::string accountName=defName,double balance=defBalance,double rate=defInterestRate );
	~SavingsAccount();
	bool Deposit(double amount);
	double getInterestRate() const ;


protected:
	double interestRate;
private:
	static constexpr const char* defName = "Unnamed Savings Account";
	static constexpr const double defBalance = 0.0;
	static constexpr const double defInterestRate = 0.0;
};



#endif // !_SAVINGS_ACCOUNT_H

