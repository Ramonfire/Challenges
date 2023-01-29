#ifndef _ILLEGAL_BALANCE_EXCEPTION_H_
#define _ILLEGAL_BALANCE_EXCEPTION_H_
#include<iostream>


class IllegalBalanceException:public std::exception
{
public:
	IllegalBalanceException() noexcept=default;
	~IllegalBalanceException()=default;
	virtual const char* what() const throw() override;

private:

};



#endif // !_ILLEGAL_BALANCE_EXCEPTION_H_

