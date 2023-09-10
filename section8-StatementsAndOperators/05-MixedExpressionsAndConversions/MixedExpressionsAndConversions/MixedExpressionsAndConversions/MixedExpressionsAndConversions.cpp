#include <iostream>

using std::cout;
using std::endl;
using std::cin;

/*
    Asks the user for 3 integers,
    calculate the sum of the integers then
    their average

    Display the 3 integers entered
    the sum of the 3 integers and
    the average of the 3 integers.
*/

int main()
{
    cout << "Please enter three integers separated by spaces: ";
    int num1{}, num2{}, num3{};
    cin >> num1>>num2>>num3;
    
    const int count = 3;
    int total = num1 + num2 + num3;
    cout << "The integers are: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "Their sum is: " << total << endl;
    double average{};
    average = total / count;
    cout << "Their average is: " << average;

    //(double)total     - old syle of casting
    // Use static_cast instead
    average = static_cast<double>(total) / count;
    cout << "Their average is with type casting is: " << average;
    cout << endl;
    return 0;
}