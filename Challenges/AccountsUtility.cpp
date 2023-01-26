#include "AccountsUtility.h"
#include<iostream>

void Display( const vector<Account>& accounts)
{
	for (auto& acc:accounts)
	{
		std::cout << acc<<std::endl;
	}
}

void MassDeposit(vector<Account>& accounts, double amount)
{
	for (auto& acc : accounts)
	{
		std::cout << acc.getName();
		std::cout << "state" << acc.Deposit(amount) ? "done" : "error";
		std::cout << std::endl;
	}
}

void MassWithdraw(vector<Account>& accounts, double amount)
{
	for (auto& acc:accounts)
	{
	std::cout << acc.getName();
	std::cout<<" state: " ;
	std::cout<< (acc.Withdraw(amount) ? "done" : "error");
	std::cout << std::endl;
	}
}



void Display(const  vector<SavingsAccount>& accounts)
{
	for (auto& acc : accounts)
	{
		std::cout << acc << std::endl;
	}
}

void MassDeposit(vector<SavingsAccount>& accounts, double amount)
{
	for (auto& acc : accounts)
	{
		std::cout << acc.getName();
		std::cout << "state: " << acc.Deposit(amount) ? "done" : "error";
		std::cout << std::endl;
	}
}

void MassWithdraw(vector<SavingsAccount>& accounts, double amount)
{
	for (auto& acc : accounts)
	{
		std::cout << acc.getName();
		std::cout << "state" << acc.Withdraw(amount) ? "done" : "error";
		std::cout << std::endl;
	}
}


void Display(const  vector<CheckingAccount>& accounts)
{
	for (auto& acc : accounts)
	{
		std::cout << acc << std::endl;
	}
}

void MassDeposit(vector<CheckingAccount>& accounts, double amount)
{
	for (auto& acc : accounts)
	{
		std::cout << acc.getName();
		std::cout << "state: " << acc.Deposit(amount) ? "done" : "error";
		std::cout << std::endl;
	}
}

void MassWithdraw(vector<CheckingAccount>& accounts, double amount)
{
	for (auto& acc : accounts)
	{
		std::cout << acc.getName();
		std::cout << "state" << acc.Withdraw(amount) ? "done" : "error";
		std::cout << std::endl;
	}
}



void Display( const vector<TrustAccount>& accounts)
{
	for (auto acc : accounts)
	{
		std::cout << acc << std::endl;
	}
}

void MassDeposit(vector<TrustAccount>& accounts, double amount)
{
	for (auto &acc : accounts)
	{
		std::cout << acc.getName();
		std::cout << "state: " << acc.Deposit(amount) ? "done" : "error";
		std::cout << std::endl;
	}
}

void MassWithdraw(vector<TrustAccount>& accounts, double amount)
{
	for (auto& acc : accounts)
	{
		std::cout << acc.getName();
		std::cout << " state: ";
		std::cout << (acc.Withdraw(amount) ? "done" : "error");
		std::cout << std::endl;
	}
}
