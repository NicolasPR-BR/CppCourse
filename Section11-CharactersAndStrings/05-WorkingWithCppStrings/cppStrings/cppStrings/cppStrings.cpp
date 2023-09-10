#include <iostream>
#include <string>
#include <iomanip>


using std::string;
using std::cout;
using std::boolalpha;
using std::endl;

int main()
{
    string s0;
    string s1{ "Apple" };
    string s2{ "Banana" };
    string s3{"Kiwi"};
    string s4{"Apple"};
    string s5{s1};
    string s6(s1, 0, 3); //App
    string s7(10,'*'); //xxxxxxxxxx

    cout << s0 << endl;
    cout << s0.length() << endl;

    //Initialization

    cout << "\nInitialization " << endl <<string(50, '*') << endl;

    cout << "s1 is initialized to: " << s1 << endl;
    cout << "s2 is initialized to: " << s2 << endl;
    cout << "s3 is initialized to: " << s3 << endl;
    cout << "s4 is initialized to: " << s4 << endl;
    cout << "s5 is initialized to: " << s5 << endl;
    cout << "s6 is initialized to: " << s6 << endl;
    cout << "s7 is initialized to: " << s7 << endl;

    // comparison
    cout << "Comparison " << endl << string(50, '*') << endl;
    cout << boolalpha;

    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    cout << s1 << " == " << s5 << ": " << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;

    // Concatenation

    s3 = "Watermelon";
    cout << "\nConcatenation" << string(50, '*')<<endl;
    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now: " << s3 << endl;

    //s3 = "nice" + " cold" + s5 + "juice"; // Compiler error

    //for loop

    cout << "\nLooping" << string(50, '*')<<endl;
    s1 = "Apple";
    for (size_t i{ 0 }; i < s1.length(); ++i) {
        cout << s1.at(i);
    }
    cout << endl;

    //range based for loop
    for (char c : s1) {
        cout << c;
    }
    cout << endl;

    //Substring
    cout << "\nSubstring" << string(50, '*') << endl;
    s1 = "This is a test";

    cout << s1.substr(0, 4) << endl;
    cout << s1.substr(5, 2) << endl;
    cout << s1.substr(10, 4) << endl;

    cout << "\nErase" << string(50, '*') << endl;
    s1 = "This is a test";
    s1.erase(0, 5);
    cout << "s1 is now: " << s1 << endl;
    

    //getline
    cout << "\ngetline" << string(50, '*') << endl;
    string full_name{};
    cout << "Enter your full name: ";

    std::getline(std::cin, full_name);
    cout << "You full name is: " << full_name<< endl;

    cout << "\nfind" << string(50, '*') << endl;
    s1 = "The secret word is boo";
    string word{};

    cout << "Enter the world to find: ";
    std::getline(std::cin, word);

    size_t position = s1.find(word);

    if (position != string::npos) {
        cout << "Found " << word << " at position: " << position << endl;
    }
    else {
        cout << "Sorry, " << word << " not found" << endl;
    }
    
    return 0;
}