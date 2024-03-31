#include <iostream>

class IllegalBalanceException {};

class Account {
    double balance;
public:
    Account(double balance) : balance{balance} {
        if (balance < 0)
            throw IllegalBalanceException{};
    };
};

int main()
{
    Account account{0};
    try{
        Account account1{-30};
    }
    catch (IllegalBalanceException &ex){
        std::cerr << "Illegal balance exception" << std::endl;
    }

    return 0;
}