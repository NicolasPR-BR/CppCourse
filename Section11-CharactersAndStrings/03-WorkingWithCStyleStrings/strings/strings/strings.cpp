#include <iostream>
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    //cout << first_name<<endl; //Will likely display garbage
    //cout << "Please enter your first name: ";

    //cin >> first_name;
    //cout << "Please enter your last name: ";
    //cin >> last_name;

    //cout << std::string(30, '*')<<endl;
    //cout << "Hello, " << first_name<< " your first name has "<< strlen(first_name)<< " characters" << endl;
    //cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

    //strcpy_s(full_name, first_name); //Copy first_name to last_name
    //strcat_s(full_name, " "); // Concatenate " " to the end of full_name
    //strcat_s(full_name, last_name); //Concatenate last name to full name

    //cout << std::string(30, '*') << endl;
    //cout << "Your full name is: " << full_name << endl;

    cout << "Enter your full name: ";
    cin.getline(full_name,50); // Reads one line to full_name up to 50 characters
    cout << "Your full name is: " << full_name << endl;
    strcpy_s(temp, full_name);

    if (strcmp(temp, full_name) == 0) {
        cout<< temp<< " and "<<full_name<< " are the same" << endl;
    }
    else {
        cout << temp << " and " << full_name << "are not the same" << endl;
    }

    for (size_t i{ 0 }; i < strlen(full_name); ++i) {
        if (isalpha(full_name[i])) {
            full_name[i] = toupper(full_name[i]);
        }
    }

    cout << "Your full name is: " << full_name << endl;
    cout << std::string(30, '*') << endl;
    if (strcmp(temp, full_name) == 0) {
        cout << temp << " and " << full_name << " are the same" << endl;
    }
    else {
        cout << temp << " and " << full_name << " are not the same" << endl;
    }

    cout << std::string(30, '*') << endl;
    cout << "Result of comparing " << temp << " and " << full_name << ": "<<strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name,temp) << endl;
    return 0;
}