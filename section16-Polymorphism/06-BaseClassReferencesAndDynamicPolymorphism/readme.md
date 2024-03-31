# Using base class references

<ul>
    <li>We can also use Base class references with dynamic polymorphism</li>
    <li>Useful when we pass objects to functions that expect a Base class reference</li>
</ul>

```
Account a;
Account &ref = a;
ref.withdraw(1000); // Account:withdraw()

Trust t;
Account &ref1 = t;
ref1.withdraw(); // trust::withdraw()
```

```
void do_withdraw(Account &account, double amount){
    account.withdraw(amount);
}

Account a;
do_withdraw(a, 1000); //Account::withdraw

Trust t;
do_withdraw(t, 1000); // Trust::withdraw
```