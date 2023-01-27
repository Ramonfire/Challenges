#include "SavingsAccount.h"




SavingsAccount::SavingsAccount(std::string accountName, double balance, double rate)
    :Account(accountName, balance), interestRate{ rate }
{
}

SavingsAccount::~SavingsAccount()
{
}

void SavingsAccount::print(std::ostream& os) const
{
    os << "Saving Account name : " << getName() << std::endl << "balance: " << getBalance() << std::endl << "Interest Rate: " << getInterestRate() << std::endl;
}

bool SavingsAccount::Deposit(double amount)
{
    if (amount < 0)
    {
        return false;
    }
     amount+= amount * (interestRate / 100);
     return Account::Deposit(amount);
}

bool SavingsAccount::Withdraw(double amount)
{
    return Account::Withdraw(amount);
}

double SavingsAccount::getInterestRate() const
{
    return interestRate;
}

