#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    int num{ 10 };

    cout << "Value of num is: " << num << endl;
    cout << "Sizeof of num is: " << sizeof(num) << endl;
    cout << "Address of num is: " << &num << endl;
    
    //Visual studio gives an error
    //We'll need to tell it to ignore this error
    //by setting Security Development Lifecycle to /sdl-
    //And by setting Run-time error checks to /RTCs
    int* p;

    cout << "Value of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl; //We're getting the address of the pointer, not where the pointer is pointing to!
    cout << "Sizeof of p is: " << sizeof(p) << endl; //Size in bytes of p
    p = nullptr;
    cout << "Value of p is: " << p << endl;

    int* p1{};
    double* p2{};
    unsigned long long* p3{};
    vector<string>* p4{};
    string* p5{};

    cout << "\nSizeof p1 is: " << sizeof(p1) << endl;
    cout << "Sizeof p2 is: " << sizeof(p1) << endl;
    cout << "Sizeof p3 is: " << sizeof(p1) << endl;
    cout << "Sizeof p4 is: " << sizeof(p1) << endl;
    cout << "Sizeof p5 is: " << sizeof(p1) << endl;

    int score{ 10 };
    double high_temp{ 100.7 };

    int* score_ptr{};

    score_ptr = &score; //Ok
    //score_ptr = &high_temp; //Compiler error
    cout << "Value of score is: " << score << endl;
    cout << "Address of score is: " << &score << endl;
    cout << "Value of score_ptr is: " << score_ptr << endl;

    return 0;
}