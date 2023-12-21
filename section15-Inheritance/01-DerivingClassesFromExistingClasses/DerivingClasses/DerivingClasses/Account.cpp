#include <iostream>

#include "Account.h"

Account::Account() : balance{ 0.0 }, name{"An Account"} {
}

Account::~Account() {

}

void Account::deposit(double amount) {
	std::cout << "Deposit called from Account: " << amount << std::endl;
}

void Account::withdraw(double amount) {
	std::cout << "Withdraw called froms Account: " << amount << std::endl;
}