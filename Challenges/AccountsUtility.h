#ifndef _ACCOUNT_UTIL_H
#define _ACCOUNT_UTIL_H
#include<vector>
#include"Account.h"
#include"SavingsAccount.h"
#include"CheckingAccount.h"
#include"TrustAccount.h"

using std::vector;


void Display(const vector<Account>& accounts);
void MassDeposit(vector<Account>& accounts,double amount);
void MassWithdraw(vector<Account>& accounts, double amount);



void Display(const vector<SavingsAccount>& accounts);
void MassDeposit(vector<SavingsAccount>& accounts, double amount);
void MassWithdraw(vector<SavingsAccount>& accounts, double amount);


void Display(const vector<CheckingAccount>& accounts);
void MassDeposit(vector<CheckingAccount>& accounts, double amount);
void MassWithdraw(vector<CheckingAccount>& accounts, double amount);


void Display(const vector<TrustAccount>& accounts);
void MassDeposit(vector<TrustAccount>& accounts, double amount);
void MassWithdraw(vector<TrustAccount>& accounts, double amount);



#endif // !_ACCOUNT_UTIL_H

