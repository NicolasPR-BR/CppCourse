# The default constructor
<ul>
    <li>Does not expect any arguments
        <ul>
            <li>Also called the no-args constructor</li>
        </ul>
    </li>
    <li>
        If you write no constructors at all for a class
        <ul>
            <li>C++ will generate a Default constructors that does nothing</li>
        </ul>
    </li>
    <li>Called when you instantiate a new Object with no arguments</li>
</ul>

```
Player frank;
Player *enemy = new Player;
```
### Declaring a class
Account - using default constructor
```
class Account{
    private:
        std::string name;
        double balance;
    public:
        bool withdraw(double amount);
        bool deposit(double amount);
};
```
### Creating objects
Using the default constructor
```
Account frank_account;
Account jim_account;

Account *mary_account = new Account;
delete mary_account;
```

Account - user-defined no-args constructor
```
class Account{
    private:
        std::string name;
        double balance;
    public:
        Account(){
            name = "None";
            balance = 0.0;
        }
    bool withdraw(double amount);
    bool deposit(double amount);
};
```

Account - no default constructor
```
class Account{
    private:
        std::string name;
        double balance;
    public:
        Account(std::string name_val, double bal){
            name = name_val;
            balance = bal;
        }
    bool withdraw(double amount);
    bool deposit(double amount);
};
```