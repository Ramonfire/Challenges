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
     this->balance += amount;
     return true;
}

bool SavingsAccount::Withdraw(double amount)
{
    if (balance - amount < 0)
    {

        return false;
    }
    this->balance -= amount;
    return true;
}

double SavingsAccount::getInterestRate() const
{
    return interestRate;
}

