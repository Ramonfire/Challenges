#include "Test.h"

Test::Test() :data{0}
{
	std::cout << "test empty constructor" << std::endl;
}

Test::Test(int data) : data{data}
{
	std::cout << "test param constructor"<<" =>" << data<< std::endl;
}

Test::~Test()
{
	std::cout << "test Destructor of :"<< data << std::endl;
}

int Test::getData()
{
	return data;
}

std::ostream& operator<<(std::ostream& os, const Test& test)
{
	os << test.data ;
	return os;
}
