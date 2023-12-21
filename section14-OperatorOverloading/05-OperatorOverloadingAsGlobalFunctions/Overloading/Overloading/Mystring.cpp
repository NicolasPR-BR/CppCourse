#define _CRT_SECURE_NO_WARNINGS // Tells the compiler to stop whining (might be unsafe tho)

#include "Mystring.h"
#include <string.h>
#include <iostream>

Mystring::Mystring() {
	str = new char[1];
	*str = '\0';
}

Mystring::Mystring(const char* s) : str{nullptr}
{
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		str = new char[std::strlen(s) + 1];
		std::strcpy(str, s);
	}
}

Mystring::Mystring(const Mystring& source) : str{nullptr}
{
	str = new char[std::strlen(source.str) + 1];
	std::strcpy(str, source.str);
}

Mystring::~Mystring()
{
	delete str;
}

void Mystring::display() const
{
	std::cout << str<<": "<< get_lenth() << std::endl;
}

int Mystring::get_lenth() const
{
	return strlen(str);
}

Mystring Mystring::operator-() const
{
	char* buff = new char[std::strlen(str) + 1];
	std::strcpy(buff, str);

	for (size_t i = 0; i < strlen(buff); i++) {
		buff[i] = std::tolower(buff[i]);
	}
	Mystring temp{ buff };

	delete[] buff;
	return temp;
}

Mystring &Mystring::operator=(const Mystring &rhs) {
	//"this" same adddress as "&rhs"?
	std::cout << "Copy operator" << std::endl;
	if (this == &rhs) {
		return *this;
	}

	delete str;
	str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(this->str, rhs.str);

	return *this;
}

Mystring& Mystring::operator=(Mystring&& rhs) noexcept{
	std::cout << "Move operator" << std::endl;
	if (this == &rhs) {
		return *this;
	}

	delete str;
	str = rhs.str;
	
	rhs.str = nullptr;

	return *this;
}

bool Mystring::operator==(const Mystring &rhs) const {
	if (std::strcmp(str, rhs.str) == 0)
		return true;
	return false;
}

Mystring Mystring::operator+(const Mystring &rhs) const
{
	char* buff = new char[std::strlen(str) + std::strlen(rhs.str)+1];
	std::strcpy(buff, str);
	std::strcat(buff, rhs.str);

	Mystring temp{ buff };

	delete[] buff;
	return temp;
}