#ifndef _ACCOUNT_UTIL_H
#define _ACCOUNT_UTIL_H
#include<vector>
#include"Account.h"

using std::vector;


void Display(const vector<Account*>& accounts);
void MassDeposit(vector<Account*>& accounts,double amount);
void MassWithdraw(vector<Account*>& accounts, double amount);





#endif // !_ACCOUNT_UTIL_H

