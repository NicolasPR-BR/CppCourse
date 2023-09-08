#include <iostream>

const double taxPercent{6.0/100};
const double costPerRoom{30};

using std::cout;
using std::cin;
using std::endl;

int main()
{

    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "How many rooms would you like cleaned? ";
    
    int nRooms{ 0 };
    cin >> nRooms;
    
    double cost{ costPerRoom * nRooms };
    cout << "Estimate for carpet cleaning service is: $" << cost << endl;
    cout << "Number of rooms: " << nRooms << endl;
    cout << "Price per room: $" << costPerRoom << endl;;
    
    double tax{cost*taxPercent};
    cout << "Tax is: $" << tax << endl;
    cout << "============================\nTotal cost is " << cost + tax << endl;
    cout << "This estimate is valid for 30 days"<< endl;
    cout << endl;

    return 0;
}