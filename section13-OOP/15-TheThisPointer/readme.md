# The this pointer
<ul>
    <li>this is a reserved keyword</li>
    <li>Contains the address of the objet - so it's a pointer to the object</li>
    <li>Can only be used in class scope</li>
    <li>All member access is done via the this pointer</li>
    <li>Can be used by the programmer
        <ul>
            <li>To access data member and methods</li>
            <li>To determine if two objects are the same(more in the next section)</li>
            <li>Can be dereferenced (*this) to yield the current object</li>
        </ul>
    </li>
</ul>

### this pointer

```
void Account::set_balance(double bal){
    balance = bal; // this->balance is implied
}
```

To disambiguate identifier use
```
void Account::set_balance(double balance){
    balance = balance; // Which balance?
}

void Account::set_balance(double balance){
    this->balance = balance; //Unambiguous
}
```

### To determine object identity
<ul>
    <li>Sometimes its useful to know if two objects are the same object</li>
<ul>

```
int Accont::compare_balance(const Account &other){
    if(this == &other)
        std::cout<<"The same object"<<std::endl;
}

frank_account.compare_balance(frank_account);
```
<ul>
    <li>We'll use the this pointer again when we overload the assignment operator</li>
</ul>