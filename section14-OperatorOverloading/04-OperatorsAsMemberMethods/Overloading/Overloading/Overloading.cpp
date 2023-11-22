#include <iostream>
#include "Mystring.h"



int main()
{
	Mystring a{"Hello"};
	Mystring b{};
	b = a; // Copy constructor

	std::cout << (a == b) << std::endl;

	b = "THIS IS A TEST, "; //move constructor
	
	b.display();
	std::cout << (a == b) << std::endl;

	b = -b;
	b.display();

	b = b + b;
	b.display();

	a = a + ", World!";
	a.display();

	return 0;
}