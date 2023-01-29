#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include<string>
#include"I_Printable.h"
#include "IllegalBalanceException.h"
#include "InsufificentFundsException.h"



class Account: public I_Printable
{

public:
	Account(std::string accountName=defName,double balance=defBalance);
	virtual ~Account();
	virtual bool Deposit(double amount)=0;
	virtual bool Withdraw(double amount)=0;
	virtual void print(std::ostream& os) const  override;
	double getBalance() const;
	std::string getName() const;

protected:
	std::string name;
	double balance;

private:
	static constexpr const char *defName = "Unnamed Account";
	static constexpr const double defBalance = 0.0;

};




#endif // !_ACCOUNT_H_

