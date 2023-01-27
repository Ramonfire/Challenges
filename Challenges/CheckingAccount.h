#ifndef _CHECKING_ACCOUNT_H
#define	_CHECKING_ACCOUNT_H

#include"Account.h"
#include<iostream>

class CheckingAccount :public Account
{
public:
	CheckingAccount(std::string name = dfName,double balance=0.0);
	virtual ~CheckingAccount();
	virtual void print(std::ostream& os) const  override;
	virtual bool Withdraw(double amount)override;
	virtual bool Deposit(double amount) override;


private:
	static constexpr double dfFee = 1.5;
	static constexpr const char* dfName = "Unnamed Checking account";

};



#endif