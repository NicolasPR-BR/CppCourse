#include <iostream>

using std::cout;
using std::endl;

int main()
{
    //Not assignment, initialization
    int num1{ 10 }; 
    int num2{ 20 };

    num1 = num2; //Assignment statement
    // num2 is equal to 1000, and num1 is equal to num2, num1 will be 1000
    num1 = num2 = 1000; 

    //100 = num1; //Error, 100 is not an l-value, 100 is a literal, so it's not assignable

    cout << "Num 1 is: " << num1 <<endl;
    cout << "Num 2 is: " << num2 << endl;
    
    cout << endl;
    return 0;
}