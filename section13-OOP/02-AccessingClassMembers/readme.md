# Accessing class members
<ul>
    <li>We can access
        <ul>
            <li>Class attributes</li>
            <li>Class methods</li>
        </ul>
    </li>
    <li>
        Some class members will not be accessible(more on that later)
    </li>
    <li>
        We need an object to access instance variables
    </li>
</ul>

### Accessing if we have an object (Using dot operator)
```
Account frank_account;

frank_account.balance;
frank_account.deposit(1000.00);
```
### If we have a pointer to an object
<ul>
    <li>Dereference the pointer using the dot operator</li>
</ul>

```
    Account *frank_account = new Account();

    (*frank_account).balance;
    (*frank_account).deposit(1000.00);
```
<ul>
    <li>Or use the member of a pointer operator(arrow operator)</li>
</ul>

```
    Account *frank_account = new Account();

    frank_account->balance;
    frank_account->deposit(1000.00);
```