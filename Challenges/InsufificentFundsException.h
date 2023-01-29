#ifndef _INSUFFICENT_FUNDS_EXCEPTION_H_
#define _INSUFFICENT_FUNDS_EXCEPTION_H_
#include<iostream>

class InsufficentFundsException:public std::exception
{
public:
	InsufficentFundsException()=default;
	~InsufficentFundsException()=default;
	virtual const char* what() const throw() override;

private:

};




#endif
