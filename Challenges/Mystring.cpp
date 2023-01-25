#include"Mystring.h"
#include<cstring>
#include<iostream>




Mystring::Mystring():str{nullptr}
{
	std::cout << "init" << std::endl;
}

Mystring::Mystring(char* newStr) 
{
	std::cout << "init with value" << std::endl;
	str = new char[std::strlen(newStr) + 1];
	for (size_t i = 0; i < std::strlen(newStr)+1; i++)
	{
		str[i] = newStr[i];
	}
}

Mystring::Mystring(Mystring& string)
{
	std::cout << "copy" << std::endl;
	str = new char[std::strlen(string.str) + 1];
	//std::strcpy(str, string.str);
	strcpy_s(str, std::strlen(string.str) + 1, string.str);

}

Mystring::Mystring(Mystring&& string) noexcept :str{string.str}
{
	std::cout << "Move" << std::endl;
	string.str = nullptr;
}


Mystring::~Mystring()
{
	delete[] str;
}



Mystring& Mystring::operator=(const Mystring& rhs)
{
	std::cout << "Copy operator" << std::endl;
	if (this==&rhs)
	{
		return *this;
	}
	delete[] str;
	str = new char[std::strlen(rhs.str) + 1];
	//std::strcpy(str, rhs.str);
	strcpy_s(str, std::strlen(rhs.str) + 1,rhs.str);

	return *this;
}

Mystring& Mystring::operator=(Mystring&& rhs) noexcept
{
	std::cout << "Move operator" << std::endl;
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
	std::cout << "equality check" << std::endl;
	return (std::strcmp(str, lhs.str) == 0);
}

bool Mystring::operator!=(const Mystring& lhs) {
	std::cout << "inequality check" << std::endl;
	return (std::strcmp(str, lhs.str) != 0);
}

bool Mystring::operator>(const Mystring& lhs) {
	std::cout << "Bigger?" << std::endl;
	return (std::strcmp(str, lhs.str) >0);
}

bool Mystring::operator<(const Mystring& lhs) {
	std::cout << "Less?" << std::endl;
	return (std::strcmp(str, lhs.str) < 0);
}

 Mystring operator+(const Mystring firstString, const Mystring secondString) {
	 std::cout << "Concat two strings " << std::endl;

	
	 char* buff = new char[std::strlen(firstString.str) + std::strlen(secondString.str) + 1];
	 size_t buffSize= std::strlen(firstString.str) + std::strlen(secondString.str) + 1;
	// std::strcpy(buff,firstString.str);
	// std::strcat(buff,secondString.str);
	 strcpy_s(buff, buffSize,firstString.str);
	 strcat_s(buff, buffSize,secondString.str);
	 Mystring temp{buff};

	 delete[] buff;
	 return temp;
	 
 }

Mystring& Mystring::operator+=(const Mystring& rhs) {
	std::cout << "concat self with smtg" << std::endl;
	
	/*Mystring temp{ };
	temp = rhs;
	*this = *this + temp;*/


	if (rhs.str==nullptr)
	{
		std::cout << "EMPTY STRING ERROR" << std::endl;
		return *this;
	}

	size_t buffSize = std::strlen(this->str) + std::strlen(rhs.str) + 1;
	char* buff = new char[buffSize];
	//std::strcpy(buff, str);
	//std::strcat(buff, rhs.str);
	strcpy_s(buff, buffSize,str);
	strcat_s(buff, buffSize, rhs.str);

	delete[] str;
	str = buff;
	buff = nullptr;

	delete[] buff;

	return *this;

}

Mystring operator*(const Mystring string, int&& multiplier) {

	std::cout << "repeat String " << std::endl;
	char* buff = new char[std::strlen(string.str) * multiplier + 1];
	size_t buffSize= std::strlen(string.str) * multiplier + 1;

	//std::strcpy(buff, "");
	strcpy_s(buff, buffSize,"");
	for (size_t i = 0; i < multiplier; i++)
	{
		//std::strcat(buff, string.str);
		strcat_s(buff, buffSize, string.str);
	
	}

	Mystring temp{ buff };

	delete[] buff;
	return temp;
}

Mystring& Mystring::operator*=(int&& multiplier) {
	std::cout << "repeat String " << std::endl;


	//*this = *this*multiplier;


	char* buff = new char[std::strlen(str) * multiplier + 1];
	size_t buffSize = std::strlen(str) * multiplier + 1;

	//std::strcpy(buff, "");
	strcpy_s(buff, buffSize, "");
	for (size_t i = 0; i < multiplier; i++)
	{
		//std::strcat(buff, string.str);
		strcat_s(buff, buffSize, str);

	}
	delete[] str;
	str = buff;

	buff = nullptr;
	delete[] buff;
	return *this;
}

Mystring& Mystring::operator++()
{
	std::cout << "Toupper" << std::endl;
	for (size_t i = 0; i < std::strlen(str); i++)
	{
		str[i] = toupper(str[i]);
	}
	return *this;
}

Mystring& Mystring::operator++(int)
{
	std::cout << "ToupperLater" << std::endl;
	Mystring temp{ *this };

	operator++();

	return temp;

}



 size_t Mystring::getlength()
 {
	 return std::strlen(str);
 }