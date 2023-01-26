#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include<string>


class Account
{
	friend std::ostream& operator<<(std::ostream& os,const  Account& account);

public:
	Account(std::string accountName=defName,double balance=defBalance);
	~Account();
	bool Deposit(double amount);
	bool Withdraw(double amount);
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

