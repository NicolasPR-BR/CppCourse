# C++ Strings
<ul>
    <li>std::string is a Class in the Standard Template libary
        <ul>
            <li>#include < string >
            </li>
            <li>Std namespace</li>
            <li>Contiguous in memory</li>
            <li>Dynamic size</li>
            <li>Work with input and output streams</li>
            <li>Lots of useful member functions</li>
            <li>Our familiar operators can be used (+, =, <, <=, >, >=, +=, ==, != , [], ...)</li>
            <li>Can be easily converted to C-Style Strings if needed</li>
            <li>Safer</li>
        </ul>
    </li>
</ul>

## Declaring and initializing
```
#include <string>
using namespace std;

string s1;
string s2{"Frank"};
string s3{s2};
string s4{"Frank", 3}; // Fra
string s5{s3, 0, 2}; // Fra
string s6(4, 'x'); // XXX
```
## Assigment = 
```
string s1;
s1 = "Strings in c++";

string s2{"Hello"};
s2 = s1;
```
## Concatenation
```
string part1{"C++"};
string part2{"is a powerful"};

string sentence;

sentence = part1 + " " + part2 + " language";
sentence = "C++" + " is powerful"; //Illegal
```

## Accessing characters [] and at() method
```
string s1;
string s2{"Frank"};

cout<<s2[0] <<endl;   // F
cout<<s2.at(0)<<endl; // F

s2[0] = 'f';    // frank
s2.at(0) = 'p'; // prank
```
```
string s1{"Frank"};
for(char c : s1)
    cout<< c<<endl
//f
//r
//a
//n
//k
```

```
string s1{"Frank"};
for(int c : s1)
    cout<< c<<endl
// 70 f
// 114 r
// 97 a
// 110 n
// 107 k
// 0 null character
```

## Comparing
== != > >= < <=
<br/>The objects are compared character by character lexically

Can compare:
<ul>
    <li>two std::string objects</li>
    <li>std::string object and C-Style string literal</li>
    <li>std::string object and C-Style string variable</li>
</ul>

Example
```
string s1{"Apple"};
string s2{"Banana"};
string s3{"Kiwi"};
string s4{"Apple"};
string s5{s1}; // Apple

s1 == s5; //True
s1 == s2; //False
s1 != s2 //True
s1 < s2 //True
s2 > s1 //True
s4 < s5 //False
s1 == "Apple"; //True

```

## Substrings -- substr()
Extracts a substring from a std::string
```
    object.substring(start_index, length)
    string s1{"This is a test"};

    cout<<s1.substring(0,4); // This
    cout<<s1.substr(5,2); // is
    cout<<s1.substr(10,4); // test
```
## Searching -- find()
Returns the index of a substring in a std::string

```
object.find(search_string)

string s1{"This is a test"};

cout<< s1.find("This");  // 0
cout<< s1.find("is");    // 2
cout<< s1.find("test");  // 10
cout<< s1.find('e');     // 11
cout<< s1.("is", 4);     // 5 //Starts at index 4
cout<< s1.find("XX")     // string::npos
```
There's also a function that starts searching backwards

## Removing a substring of characters from a std::string
```
    object.erase(start_index, length)

string s1{"this is a test"};

cout<< s1.erase(0, 5); // Is a test
cout<< s1.erase(5, 4); // Is a
s1.clear(); //Empties string s1

```

## Other useful methods
```
string s1{"Frank"};
cout<< s1.length()<<endl; // 5

s1 += " James";
cout<< s1 >>endl; //Frank James

```
Many more...

## Input >> getline()
Reading std::string from cin
```
string s1;
cin>>s1; //Hello there

cout<<s1<<endl; //Hello

getline(cin, s1); //Read entire line until \n
cout<<s1<<endl; //Hello There

getline(cin, s1, 'x'); //This isx
cout<< s1<<endl;
```