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