#include <iostream>

using std::cout;
using std::endl;

int test(int a) {
    cout << a<<endl;
    return a + test(++a);
}

int main()
{
    int num1{200};
    int num2{100};
    test(1);
    cout << num1 << " + " << num2 << " = " << num1 + num2<<endl;

    int result{0};
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " <<result<<endl;

    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result<<endl;

    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    // Integer division we lose precision
    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl;

    //Remainder of the division
    //Remainder is 100
    result = num2 % num1;
    cout << num2 << " % " << num1 << " = " << result << endl;

    num1 = 10;
    num2 = 30;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    result = num1 * 10 + num2;

    cout << 5 / 10 << endl;
    cout << 5.0 / 10 << endl;
    
    cout << endl;
    return 0;
}