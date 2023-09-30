#include <iostream>
#include <string>
#include "Account.h"

int main()
{
    Account frank_Account;
    frank_Account.set_name("Franks account");
    frank_Account.set_balance(1000.0);

    if (frank_Account.deposit(200.0)) {
        std::cout << "Deposit ok" << std::endl;
    }
    else {
        std::cout << "Deposit not allowed" << std::endl;
    }

    if (frank_Account.withdraw(500.0)) {
        std::cout << "Withdrawal ok" << std::endl;
    }
    else {
        std::cout << "Insufficient funds" << std::endl;
    }

    if (frank_Account.withdraw(1500.0)) {
        std::cout << "Withdraw ok" << std::endl;
    }
    else {
        std::cout << "Insufficient funds" << std::endl;
    }

    return 0;
}