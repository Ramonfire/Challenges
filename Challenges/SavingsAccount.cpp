#include "SavingsAccount.h"




SavingsAccount::SavingsAccount(std::string accountName, double balance, double rate)
    :Account(accountName, balance), interestRate{ rate }
{
}

SavingsAccount::~SavingsAccount()
{
}

bool SavingsAccount::Deposit(double amount)
{
    if (amount<0)
    {
        return false;
    }
     amount+= amount * (interestRate / 100);
   return  Account::Deposit(amount);
}

double SavingsAccount::getInterestRate() const
{
    return interestRate;
}

std::ostream& operator<<(std::ostream& os,const  SavingsAccount& account)
{
    os << "Account name : " << account.getName() << std::endl << "balance: " << account.getBalance() << std::endl << "Interest Rate: " << account.getInterestRate() << std::endl;
    return os;
}