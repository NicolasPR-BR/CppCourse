#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    bool equal_result{ false };
    bool not_equal_result{false};

    //int num1, num2;

    //cout << std::boolalpha; // Will display true/false intead of 1/0 for booleans

    //cout << "Enter two integers separated by a space: ";
    //cin >> num1 >> num2;
    //equal_result = (num1 == num2);
    //not_equal_result = (num1 != num2);
    //cout << "Comparison result(equals): " << equal_result << endl;
    //cout << "Comparison result(not equals): " << not_equal_result << endl;

    /*char char1{}, char2{};
    cout << "Enter two characters separated by a space: ";
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    cout << "Comparison result(equals): " << equal_result << endl;
    cout << "Comparison result(not equals): " << not_equal_result << endl;*/

    /*double double1{}, double2{};
    cout << "Enter two doubles separated by a space: ";
    cin >> double1 >> double2;
    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);
    cout << "Comparison result(equals): " << equal_result << endl;
    cout << "Comparison result(not equals): " << not_equal_result << endl;*/

    int num1{};
    double num2{};

    cout << "Enter one integer and one double separated by a space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparison result(equals): " << equal_result << endl;
    cout << "Comparison result(not equals): " << not_equal_result << endl;

    return 0;
}