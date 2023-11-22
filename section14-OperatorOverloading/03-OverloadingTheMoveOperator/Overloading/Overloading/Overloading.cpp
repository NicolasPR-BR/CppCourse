#include <iostream>
#include "Mystring.h"



int main()
{
	Mystring a{"Hello"};
	Mystring b{};
	b = a; // Copy constructor

	b = "This is a test"; //move constructor

	b.display();

	return 0;
}