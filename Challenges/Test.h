#ifndef _TEST_H_
#define _TEST_H_
#include<iostream>


class Test
{
	friend std::ostream& operator<<(std::ostream& os, const Test &test);
public:
	Test();
	Test(int data);
	~Test();
	int getData();


private:
	int data;
};



#endif