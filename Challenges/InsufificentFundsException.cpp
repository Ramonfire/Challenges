#include "InsufificentFundsException.h"

const char* InsufficentFundsException::what() const throw()
{
    return "Insufficent funds to procede with the transaction";
}
