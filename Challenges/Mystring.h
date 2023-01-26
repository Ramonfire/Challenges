#ifndef _MYSTRING_H
#define _MYSTRING_H
#include<cstring>
#include<iostream>

class Mystring
{
public:
	Mystring();
	Mystring(char* newStr);
	Mystring(const Mystring& string);
	Mystring(Mystring&& string) noexcept;
	~Mystring();





	Mystring& operator=(const Mystring& rhs);
	Mystring& operator=(Mystring&& rhs) noexcept;


	bool operator==(const  Mystring& lhs);
	bool operator!=(const Mystring& lhs);
	bool operator>(const Mystring& lhs);
	bool operator<(const Mystring& lhs);
	friend Mystring operator + (const Mystring firstString, const Mystring secondString);
	Mystring &operator+=(const Mystring& lhs);
	friend Mystring operator * (const Mystring string, int&& multiplier);
	Mystring &operator*=(int &&lhs);
	

	Mystring& operator++();
	Mystring& operator++(int);


	size_t getlength();
	char* MyString();



	
	

private:
	char* str;
};




#endif // !_MYSTRING_H

