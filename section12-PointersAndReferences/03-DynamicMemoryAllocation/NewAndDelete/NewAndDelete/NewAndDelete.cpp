#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    //Requests memory from the heap
    int* ptr{};
    ptr = new int;

    cout << ptr << endl;
    cout << *ptr << endl; //Garbage
    
    *ptr = 0;

    cout << *ptr << endl;;

    delete(ptr);

    size_t size{};
    double* temp_ptr{};
    cout << "How many doubles should we allocate? ";
    cin >> size;
    temp_ptr = new double[size];

    delete[](temp_ptr); //We don't need to pass the size to the delete function
    //The OS knows how many places in memory we allocated starting at temp_ptr
    
    // Will crash the computer by causing a memory leak
    //while (true) {
    //    temp_ptr = new double[size]
    //}

    cin >> size;
    return 0;
}