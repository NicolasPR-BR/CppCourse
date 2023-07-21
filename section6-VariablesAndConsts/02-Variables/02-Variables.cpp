#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//The program will calculate the area of a room in square feet

int main()
{
    // Compiler option /sdl must be disabled to see what happens when a variable is not initialized
    /*
    int age{}; 
    cout << age << endl;*/

    int roomWidth{}, roomLength{};

    cout << "Enter the width of the room: ";
    cin >> roomWidth;
    cout << "Enter the length of the room: ";
    cin >> roomLength;

    cout << "The are of the room is: " << roomWidth * roomLength << " square feet" << endl;

    return 0;
}