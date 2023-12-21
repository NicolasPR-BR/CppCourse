# Deriving classes from existing classes

```
class Base{
    // Base class
};
```

```
class Derived: access-specifier Base{
    // Derived class 
}
```
The access-specifier can be: public, private or protected. 

### Types of inheritance in C++
<ul>
    <li>Public
        <ul>
            <li>Most common</li>
            <li>Establishes "is-a" relationship between the Parent and the child classs</li>
        </ul>
    </li>
    <li>Private
        <ul>
            <li>Established "derived class has a base class" relationship</li>
            <li>"Is implemented in terms of" relationship</li>
            <li>Not the same as composition</li>
        </ul>
    </li>
</ul>

### Example

```
class Account{
    // Account class members
};
```

```
class SavingsAccount : public Account{
    // Savings class members
};
```

Savings_Account "is-a" Account

### Creating objects
```
Account account{};
Account *p_account = new Account();

account.deposit(1000.0);
p_account->withdraw(200.0);

delete p_account;
```

