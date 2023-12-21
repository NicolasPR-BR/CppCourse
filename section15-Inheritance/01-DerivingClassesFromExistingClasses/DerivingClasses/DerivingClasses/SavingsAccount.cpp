#include <iostream>

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() : int_rate{3.0} {

}

SavingsAccount::~SavingsAccount() {

}

void SavingsAccount::deposit(double amount) {
	std::cout << "Deposit called from SavingsAccount: " << amount << std::endl;
}

void SavingsAccount::withdraw(double amount) {
	std::cout << "Withdraw called froms SavingsAccount: " << amount << std::endl;
}