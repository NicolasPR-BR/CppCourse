#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    //Prints "Hello World!" to the console and goes to the next line
    //cout <<"Hello World!"<<endl;

    //First displays "Hello" and does not end the line, then prints "World!" and jumps to the start of the next line
    //cout << "Hello ";
    //cout << "World!" << endl;

    //Prints "Hello World!" and jumps into the start of the next line
    //cout << "Hello " << "World!" << endl;
    //Prints "Hello World!" and jumps into the start of the next line
    //cout << "Hello " << "World!\n";
    //Prints "Hello", jumps a line, prints "out" and jumps into the next line, Prints "There" and jumps into the next line
    //cout << "Hello\nOut\nThere\n";

    //Creates two ints and one double and initializes them to zero
    int num1{0}, num2{0};
    double num3{0};
        
    /*
        When we read from the buffer, it reads until the newline, So when "You entered:"
        is printed, it's in a new line.

        In case we write a number, and then separated by space another number, num2 won't wait
        for us to write another number into the console because there's data in the buffer
    */
    /*
    cout << "Enter an integer: ";
    cin >> num1;
    cout << "You entered: " << num1 <<endl;

    cout << "Enter another integer: ";
    cin >> num2;
    cout << "You entered: " << num2 << endl;

    cout << "Enter a double: ";
    cin >> num3;
    cout << "You entered: " << num3 << endl;
    
    cout << "The integers are: {" << num1 << ", " << num2 << "}, and the double is: " << num3 << endl;
    */

    /*
    cout << "Enter two integers separated by space: ";
    cin >> num1 >> num2;
    cout << num1 << "\t" << num2 << endl;
    */
    
    return 0;
}