#ifndef _SAVINGS_ACCOUNT_H
#define _SAVINGS_ACCOUNT_H
#include"Account.h"

class SavingsAccount:public Account
{
public:
	SavingsAccount(std::string accountName=defName,double balance=defBalance,double rate=defInterestRate );
	virtual ~SavingsAccount();
	virtual void print(std::ostream& os) const  override;
	virtual bool Deposit(double amount) override;
	virtual bool Withdraw(double amount) override;
	double getInterestRate() const ;


protected:
	double interestRate;
private:
	static constexpr const char* defName = "Unnamed Savings Account";
	static constexpr const double defBalance = 0.0;
	static constexpr const double defInterestRate = 0.0;
};



#endif // !_SAVINGS_ACCOUNT_H

