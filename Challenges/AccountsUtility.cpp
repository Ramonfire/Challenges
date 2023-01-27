#include "AccountsUtility.h"
#include<iostream>

void Display( const vector<Account*>& accounts)
{
	for (auto& acc:accounts)
	{
		std::cout << (*acc)<<std::endl;
	}
}

void MassDeposit(vector<Account* >& accounts, double amount)
{
	for (auto& acc : accounts)
	{
		std::cout << "Name: " << acc->getName() << std::endl;
		std::cout << " state: ";
		std::cout << (acc->Deposit(amount) ? "done" : "error");
		std::cout << std::endl;
	}
}

void MassWithdraw(vector<Account*>& accounts, double amount)
{
	for (auto& acc:accounts)
	{
		std::cout << "Name: " << acc->getName() << std::endl;
		std::cout<<" state: " ;
		std::cout<< (acc->Withdraw(amount) ? "done" : "error");
		std::cout << std::endl;
	}
}
