#include <iostream>

#include "Account.h"
#include "SavingsAccount.h"

int main()
{
    Account acc;
    SavingsAccount sAcc;

    acc.deposit(200);
    sAcc.deposit(230);

    acc.withdraw(120);
    sAcc.withdraw(10);

    Account *nAcc = new Account(sAcc);

    nAcc->deposit(300);
    nAcc->withdraw(201);  
        
    delete nAcc;
    return 0;
}