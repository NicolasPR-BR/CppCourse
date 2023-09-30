#include <iostream>
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
    }else{
        return false;
    }
}

int main()
{
    Account frank_Account;
    frank_Account.set_name("Franks account");
    frank_Account.set_balance(1000.0);

    if (frank_Account.deposit(200.0)){
        std::cout << "Deposit ok" << std::endl;
    }
    else{
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