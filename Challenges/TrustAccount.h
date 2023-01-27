
#ifndef _TRUST_ACCOUNT_H
#define	_TRUST_ACCOUNT_H

#include "SavingsAccount.h"
#include<iostream>

class TrustAccount : public SavingsAccount
{
public:
	TrustAccount(std::string accountName=dfName,double balance=dfBalance,double rate=dfRate);
	virtual ~TrustAccount();
	virtual void print(std::ostream& os) const  override;
	virtual bool Deposit(double amount) override;
	virtual bool Withdraw(double amount) override;
	

protected:
	int withdrawalCount;

private:
	static constexpr const char* dfName = "Unnamed Trust Account";
	static constexpr double dfBalance = 0.0;
	static constexpr double dfRate = 0.0;
};
#endif // !_TRUST_ACCOUNT_H


