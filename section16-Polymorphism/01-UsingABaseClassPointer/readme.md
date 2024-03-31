# Using a base class pointer
<ul>
    <li>For dynamic polymorphism we must have:
        <ul>
            <li>Inheritance</li>
            <li>Base class pointer or Base class reference</li>
            <li>Virtual functions</li>
        </ul>
    </li>
</ul>

Using a base class pointer

```
Account *p1 = new Account();
Account *p2 = new Savings();
Account *p3 = new Checking();
Account *p4 = new Trust();

p1-> withdraw(1000); // Account::withdraw
p2-> withdraw(1000); // Savings::withdraw
p3-> withdraw(1000); // Checking::withdraw
p4-> withdraw(1000); // Trust::withdraw

// delete pointers
```

Using a base class pointer

```
Account *p1 = new Account();
Account *p2 = new Savings();
Account *p3 = new Checkings();
Account *p4 = new Trust();

//Array that holds pointers to account objects
Account *array[] = {p1, p2, p3, p4};

for (auto i = 0; i < 4; i++){
    array[i]->withdraw();
}
```

This also works to other data types such as vectors:
```
Account *p1 = new Account();
Account *p2 = new Savings();
Account *p3 = new Checkings();
Account *p4 = new Trust();

vector<Account *> account{p1, p2, p3, p4};


for (auto acc_ptr: accounts)
    acc_ptr->withdraw(1000);

//delete pointers
```