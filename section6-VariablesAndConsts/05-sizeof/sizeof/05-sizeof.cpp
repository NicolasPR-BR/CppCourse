#include <iostream>
#include <climits> //Use for Integer
#include <cfloat>				

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "*********************************************" << endl;
	cout << "sizeof information " << endl;
	cout << "*********************************************" << endl;
	cout << "Char: " << sizeof(char) << " bytes." << endl;
	cout << "Int: " << sizeof(int) << " bytes." << endl;
	cout << "Unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
	cout << "Short: " << sizeof(short) << " bytes." << endl;
	cout << "Long: " << sizeof(long) << " bytes." << endl;
	cout << "Long long: " << sizeof(long long) << " bytes." << endl;
	cout << "*********************************************" << endl;
	
	cout << "Float: " << sizeof(float) << " bytes." << endl;
	cout << "Double: " << sizeof(double) << " bytes." << endl;
	cout << "Long Double: " << sizeof(long double) << " bytes." << endl;
	cout << "*********************************************" << endl;
	
	//Values defined in <climits>
	cout << "Minimum values:" << endl;
	cout << "Char: " << CHAR_MIN << endl;
	cout << "Int: " << INT_MIN << endl;
	cout << "Short: " << SHRT_MIN << endl;
	cout << "Long: " << LONG_MIN << endl;
	cout << "Long long: " << LLONG_MIN << endl;

	//Values defined by cfloat	
	cout << "Float: " << FLT_MIN << endl;
	cout << "Double: " << -DBL_MIN << endl;

	cout << "*********************************************" << endl;
	cout << "Maximum values:" << endl;
	cout << "Char: " << CHAR_MAX << endl;
	cout << "Int: " << INT_MAX << endl;
	cout << "Short: " << SHRT_MAX << endl;
	cout << "Long: " << LONG_MAX << endl;
	cout << "Long long: " << LLONG_MAX << endl;

	//Values defined by cfloat	
	cout << "Float: " << FLT_MAX << endl;
	cout << "Double: " << -DBL_MAX << endl;
	cout << "*********************************************" << endl;

	//Sizeof can also be used with variable names
	cout << "Sizeof using variable names: " << endl;
	int age{};
	cout << "Age is : " << sizeof(age) << " bytes." << endl;
	//or
	cout << "Age is : " << sizeof age << " bytes." << endl;

	double wage{ 22.24 };
	cout << "Wage is : " << sizeof(wage) << " bytes." << endl;
	//or
	cout << "Wage is : " << sizeof wage << " bytes." << endl;
	cout << "*********************************************" << endl;
	return 0;
}