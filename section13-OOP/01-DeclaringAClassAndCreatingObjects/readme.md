# Declaring a class
```
class Class_name{
    //declarations
};
```

```
class Player{

    //Attributes
    std::string name;
    int health;
    int xp;

    //Methods
    void talk(std::string text_to_say);
    bool is_dead();
};
```
### Creating Objects
```
Player frank;
Player hero;

Player *enemy = new Player();


delete enemy;
```
### Acount example
```
class Account{
    //Attributes
    std::string name;
    double balance;

    //Methods
    bool withdraw(double amount);
    bool deposit(double amount);
};
```
Creating objects
```
Account frank_account;
Account jim_account;

Account *mary_account = new Account();

delete mary_account;

```

```
Account frank_account;
Account jim_account;

Account accounts[] {frank_account, jim_account};

std::vector<Account> accounts1 {frank_account};
accounts1.push_back(jim_account);
```