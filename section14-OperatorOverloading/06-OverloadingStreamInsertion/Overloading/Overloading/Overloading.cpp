#include <iostream>
#include <cstring>
#include "Mystring.h"

std::ostream& operator<<(std::ostream &os, const Mystring &rhs) {
	os << rhs.str;
	return os;
}

std::istream& operator>>(std::istream& in, Mystring& rhs) {
	char* buff = new char[1000];
	in >> buff;
	rhs = Mystring{ buff };
	delete [] buff;
	return in;
}

int main()
{
	Mystring a{"Hello"};
	Mystring b{};
	b = a; // Copy constructor

	std::cout << (a == b) << std::endl;

	b = "THIS IS A TEST, "; //move constructor
	
	std::cout << "Enter a name: ";
	std::cin >> b;
	b.display();

	std::cout << b << std::endl;

	return 0;
}