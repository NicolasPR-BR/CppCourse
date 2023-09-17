#include <iostream>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;

void pass_by_ref1(int& num) {
    num = 1000;
}

void pass_by_ref2(string &s) {
    s = "Changed";
}

void pass_by_ref3(vector<string> &v) {
    v.clear();
}

void print_vector(const vector<string> &v) {
    for (string s : v) {
        cout << s<<" ";
    }
    cout << endl;
}

int main()
{
    int num{ 10 };
    int another_num{ 20 };

    cout << "Num before calling pass_by_ref1: " << num << endl;
    pass_by_ref1(num);
    cout << "Num after calling pass_by_ref1: " << num << endl;
    
    cout << "another_num before calling pass_by_ref1: " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "another_num after calling pass_by_ref1: " << another_num << endl;

    string name{ "Frank" };
    cout << "\nName before calling pass_by_reference2: " << name << endl;
    pass_by_ref2(name);
    cout << "Name after calling pass_by_reference2: " << name << endl;

    vector<string> vec{ "Larry", "Moe","Curly"};
    cout << "Vector before calling pass_by_ref3: ";
    print_vector(vec);
    pass_by_ref3(vec);
    cout << "Vector after calling pass_by_ref3: ";
    print_vector(vec);


    return 0;
}