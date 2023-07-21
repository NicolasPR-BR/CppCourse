#include <iostream>

using std::cout;
using std::endl;

int main()
{
    /*
        Character type
    */
    char middle_initial{ 'j' }; //simple quotes makes it a character, not a string
    cout << "My middle initial is: " << middle_initial << endl;

    /*
        Integer type
    */
    
    unsigned short int exam_score{ 55 }; //Or unsigned short
    cout << "My exam score was " << exam_score << endl;

    int countries_represented{ 65 };
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

    long people_in_florida{ 20610000 };
    cout << "There are about " << people_in_florida << " people in Florida" << endl;

    long long people_on_earth{ 7'600'000'000 };
    //long people_on_earth = 7'600'000'000; //Overflow, we don't get an error, this is why we should use {}
    cout << "There are about " << people_on_earth << " people on Earth" << endl;

    long long distance_to_alpha_centauri{9'461'000'000'000};
    cout << "The distance to Alpha Centauri is " << distance_to_alpha_centauri << " kilometers" << endl;

    /*
        floating-point type
    */
    
    float car_payment{ 401.23 };
    cout << "My car payment is " << car_payment << endl;

    double pi{ 3.14159 };
    cout << "PI is " << pi << endl;

    long double large_amount{ 2.7e120 };
    cout << large_amount << " is a very big number"<<endl;

    /*
        Boolean type
    */

    bool game_over{false};
    cout << "The value of gameOver is: " << game_over << endl;

    /*
        overflow example
    */

    short value1{ 30000 }, value2{ 1000 }, product{value1*value2};
   
    cout << "The sum of " << value1 << " and " << value2 << " is: " << product << endl;

    return 0;
}