#include "IllegalBalanceException.h"


const char* IllegalBalanceException::what() const throw()
{
	return "negative balance error";
}
