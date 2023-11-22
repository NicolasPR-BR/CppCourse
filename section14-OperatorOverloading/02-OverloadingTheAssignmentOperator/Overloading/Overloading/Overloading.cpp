#include <iostream>
#include "Mystring.h"



int main()
{
	Mystring a{"Hello"};
	Mystring b{};
	b = a;

	b = "This is a test";

	b.display();

	return 0;
}