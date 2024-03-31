#include <iostream>

class Account {
public:
    // By using virtual we make this function dynamically bounded
    virtual void withdraw(double amount = 999) {
        std::cout << "In Account::widthdraw" << std::endl;
    }
    // We must tell the destructor also is virtual
    virtual ~Account() {
        std::cout << "Account destructor" << std::endl;
    }
};

class Checking : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::widthdraw" << std::endl;
    }

    virtual ~Checking() {
        std::cout << "Checking destructor" << std::endl;
    }
};

class Savings : public Account {
    int* p{};
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::widthdraw" << std::endl;
    }

    Savings() {

    };

    virtual ~Savings() {
        std::cout << "Savings destructor" << std::endl;
    }
};

class Trust : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::widthdraw" << std::endl;
    }

    virtual ~Trust() {
        std::cout << "Trust destructor" << std::endl;
    }
};

int main()
{
    Account* p1 = new Account{};
    Account* p2 = new Checking{};
    Account* p3 = new Savings{};
    Account* p4 = new Trust{};

    Account* arr[]{p1, p2, p3, p4};

    for (int i = 0; i < 4; i++) {
        arr[i]->withdraw(100);
    }
    std::cout << std::endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    

    return 0;
}