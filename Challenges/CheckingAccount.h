#ifndef _CHECKING_ACCOUNT_H
#define	_CHECKING_ACCOUNT_H

#include"Account.h"
#include<iostream>

class CheckingAccount :public Account
{

public:
	CheckingAccount(std::string name = dfName,double balance=0.0);
	~CheckingAccount();
	bool Withdraw(double amount);


private:
	static constexpr double dfFee = 1.5;
	static constexpr const char* dfName = "Unnamed Checking account";

};



#endif