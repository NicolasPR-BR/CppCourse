#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int counter{10};
    int result{0};

    // Example 1 - simple increment
   /* cout << "Counter: " << counter << endl;

    counter = counter + 1;
    cout << "Counter: " << counter << endl;

    counter++;
    cout << "Counter: " << counter << endl;

    ++counter;
    cout << "Counter: " << counter << endl;*/

    // Example 2 - preincrement
    counter = 10;
    result = 0;
    
    //cout << "Counter: " << counter << endl;
    //result = ++counter; //Counter is incremented before its use
    ////Effectively counter += 1;
    //// result = counter;
    //cout << "Counter: " << counter << endl;
    //cout << "Result: " << result << endl;

    //Example 3 - post-increment
    counter = 10;
    result = 0;

    //cout << "Counter: " << counter << endl;
    //result = counter++; //Post-increment
    ////Effectively result = counter;
    //// counter += 1;
    //cout << "Counter: " << counter << endl;
    //cout << "Result: " << result << endl;

    //Example 4
    counter = 10;
    result = 0;

    /*cout << "Counter: " << counter << endl;
    result = ++counter + 10;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;*/

    //Example 5 
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;
    result = counter++ + 10; //Used the values of counter, adds 10, and saves to result
    // Then counter is incremented by one
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    return 0;
}