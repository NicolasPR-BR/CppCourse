# Class level Handling

Exceptions can be thrown from within a class:

<ul>
    <li>Methods
        <ul>
            <li>These work the same way as they do for functions as we've seen</li>
        </ul>
    </li>
    <li>Constructor
        <ul>
            <li>Constructor may fail</li>
            <li>Constructors do not return any value</li>
            <li>Throw an exception in the constructor if you cannot initialize an object</li>
        </ul>
    </li>
    <li>Destructor
        <ul>
            <li>Do not throw exception from you destructor</li>
        </ul>
    </li>
</ul>

Class level exceptions

```
Account::Account(std::string name, double balance) : name{name}, balanace{balance}{
    if(balance < 0.0)
        throw IllegalBalanceException{};
}
```