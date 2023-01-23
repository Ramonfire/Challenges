#include"Mystring.h"
#include<cstring>
#include<iostream>




Mystring::Mystring():str{nullptr}
{
}

Mystring::Mystring(char* newStr) 
{
	str = new char[std::strlen(newStr) + 1];
	for (size_t i = 0; i < std::strlen(newStr); i++)
	{
		str[i] = newStr[i];
	}
}

Mystring::Mystring(Mystring& string)
{
	str = new char[std::strlen(string.str) + 1];
	std::strcpy(str, string.str);

}

Mystring::Mystring(Mystring&& string) noexcept :str{string.str}
{
	string.str = nullptr;
}


Mystring::~Mystring()
{
	delete[] str;
}



Mystring& Mystring::operator=(const Mystring& rhs)
{
	if (this==&rhs)
	{
		return *this;
	}
	delete[] str;
	str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(str, rhs.str);

	return *this;
}

Mystring& Mystring::operator=(Mystring&& rhs) noexcept
{
	if (this == &rhs)
	{
		return *this;
	}
	delete[] str;
	str = rhs.str;
	rhs.str = nullptr;

	return *this;

}

bool Mystring::operator==(const  Mystring& lhs) {
	return (std::strcmp(str, lhs.str) == 0);
}

bool Mystring::operator!=(const Mystring& lhs) {
	return (std::strcmp(str, lhs.str) != 0);
}

bool Mystring::operator>(const Mystring& lhs) {
	return (std::strcmp(str, lhs.str) >0);
}

bool Mystring::operator<(const Mystring& lhs) {
	return (std::strcmp(str, lhs.str) < 0);
}

 Mystring operator +(const Mystring firstString, const Mystring secondString) {

	 char* buff = new char[std::strlen(firstString.str) + std::strlen(secondString.str) + 1];

	 std::strcpy(buff,firstString.str);
	 std::strcat(buff,secondString.str);
	 Mystring temp{buff};

	 delete[] buff;
	 return temp;
	 
 }

Mystring& Mystring::operator+=(const Mystring& rhs) {


	char* buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
	std::strcpy(buff, str);
	std::strcat(buff, rhs.str);


	Mystring temp{ buff };

	delete[] buff;

	return temp;

}

Mystring operator* (const Mystring string, int&& multiplier) {

	char* buff = new char[std::strlen(string.str) * multiplier + 1];


	std::strcpy(buff, "");
	for (size_t i = 0; i < multiplier; i++)
	{
		std::strcat(buff, string.str);
	}

	Mystring temp{ buff };

	delete[] buff;
	return temp;
}

Mystring& Mystring::operator*=(int&& lhs) {


	char * buff = new char[std::strlen(str)*lhs +1];
	std::strcpy(buff, "");
	for (size_t i = 0; i < lhs; i++)
	{
	std::strcat(buff, str);
	}


	Mystring temp{ buff };

	delete[] buff;

	return temp;
}

Mystring& Mystring::operator++()
{
	for (size_t i = 0; i < std::strlen(str); i++)
	{
		str[i] = toupper(str[i]);
	}
	return *this;
}

Mystring& Mystring::operator++(int)
{
	Mystring temp{ *this };

	operator++();

	return temp;

}



 size_t Mystring::getlength()
 {
	 return std::strlen(str);
 }