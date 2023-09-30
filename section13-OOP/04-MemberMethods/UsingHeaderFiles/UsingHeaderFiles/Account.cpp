#include "Account.h"

void Account::set_name(std::string name) {
    this->name = name;
}

std::string Account::get_name() {
    return this->name;
}

bool Account::deposit(double amount) {
    this->balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    }
    else {
        return false;
    }
}