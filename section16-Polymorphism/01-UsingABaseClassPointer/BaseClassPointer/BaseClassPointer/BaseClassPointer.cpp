#include <iostream>

class Account {
public:

    virtual void withdraw(double amnt) {
        std::cout << "Account class, amount: " << amnt << std::endl;
    };

};

class Checking : public Account {
public:
    void withdraw(double amnt) {
        std::cout << "Checking class, amount: " << amnt << std::endl;
    }
};

class Savings : public Account {
public:
    void withdraw(double amnt) {
        std::cout << "Savings class, amount: "<< amnt << std::endl;
    }
};

class Trust : public Account {
public:
};

int main()
{
    Account* p1{ new Checking{} };
    Account* p2{ new Savings{} };
    Account* p3{ new Trust{} };
    Account* p4{ new Account{} };
    Account* arr[]{p1, p2, p3, p4};
    
    arr[0]->withdraw(1000.0);
    arr[1]->withdraw(3400.0);
    arr[2]->withdraw(500.0);
    arr[3]->withdraw(500.0);

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}