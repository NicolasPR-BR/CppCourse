#pragma once
#include <string>

class Account {
private:
    //Attributes
    std::string name;
    double balance;
public:
    //Methods
    //Inline methods
    void set_balance(double bal) { balance = bal; };
    double get_balance() { return balance; };

    //These methods will be declared outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};