#include <iostream>
#include <vector>

#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"

class Test {
private:
    int data;
public:

    Test(int data) : data{ data } {
        std::cout << "Test constructor (" << data << ")" << std::endl;
    };

    Test() : Test(0) { };

    int getData() {
        return data;
    }

    ~Test() {
        std::cout << "Test destructor (" << data << ")" << std::endl;
    }

};

int main()
{
    //Test* t1{ new Test{1000} };

    //std::unique_ptr<Test> t1{ new Test{1000} };
    std::unique_ptr<Test> t1{ std::make_unique<Test>(Test{1000}) };

    std::unique_ptr<Test> t3{};

    //Throws an error
    // t3 = t1;

    //Allowed
    t3 = std::move(t1);

    std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>(Checking_Account{ "Moe", 5000.0 });
    std::cout << *a1 << std::endl;
    a1->deposit(5000);
    std::cout << *a1 << std::endl<<std::endl;
    
    std::vector<std::unique_ptr<Account>> v{ std::make_unique<Checking_Account>("Moe", 5000.0) };
    v.push_back(std::make_unique<Checking_Account>("Moe", 5000.0));
    v.push_back(std::make_unique<Savings_Account>("James", 1000));
    v.push_back(std::make_unique<Trust_Account>("Billy", 2334));
    
    for (const auto &a : v) {
        std::cout << *a << std::endl;
    }

    //delete t1;
    return 0;
}