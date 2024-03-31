# Section overview
Polymorphism and Inheritance

<ul>
    <li>What is polymorphism?</li>
    <li>Using base class pointers</li>
    <li>Static vs dynamic binding</li>
    <li>Virtual functions</li>
    <li>Virtual destructors</li>
    <li>The override and final specifiers</li>
    <li>Using base class references</li>
    <li>Pure virtual functions and abstract classes</li>
    <li>Abstract classes as interfaces</li>
</ul>

## What is polymorphism?
<ul>
    <li>Is fundamental to Object-oriented programming</li>
    <li>Polymorphism
        <ul>
            <li>compile-time / early-binding / static binding</li>
            <li>Run-time / late binding / dynamic binding</li>
        </ul>
    </li>
    <li>Runtime polymorphism
        <ul>
            <li>Being able to assign different meaning to the same function at run-time</li>
        </ul>
    </li>
    <li>Allows us to program more abstractly
        <ul>
            <li>Think general vs specific</li>
            <li>Let C++ figure out which function to call at run-time</li>
        </ul>
    </li>
    <li>Not the default in C++, run-time polymorphism is achieved via
        <ul>
            <li>Inheritance</li>
            <li>Base class pointers or references</li>
            <li>Virtual functions</li>
        </ul>
    </li>
</ul>

### Types of polymorphism
<ul>
    <li>Compile-time
        <ul>
            <li>Function overloading</li>
            <li>Operator overloading</li>
        </ul>
    </li>
</ul>

<ul>
    <li>Run-time
        <ul>
            <li>Function overriding</li>
        </ul>
    </li>
</ul>

A non-polymorphic example - Static binding
```
Account a;
a.withdraw(1000); Account::withdraw();

Savings b;
b.withdraw(1000); // Savings::withdraw();

Checking c;
c.withdraw(1000); Checking::withdraw();

Trust d;
d.withdraw(1000); // Trust::withdraw();

Account *p = new Trust();
P->withdraw(1000); // Account::withdraw() should instead be
// Trust::withdraw();
```


Run time polymorphism:
```
void display_account(const Account &acc){
    acc.display();
    //Will always use Account::display
}

Account a;
display_account(a);

Savings b;
display_account(b);

Checking c;
display_account(c);

Trust d;
display_account(d);

Account *p = new Trust();
p->withdraw(1000); // Trust::withdraw()
```
***withdraw*** method is virtual in Account.

By making functions virtual, we can tell the compiler to bind the calls at runtime, not at compile-time, thus allowing Trust::withdraw to be called even though we are acessing it through a Account pointer.


#### A polymorphic example - Dynamic Binding

```
void display_account(const Account &acc){
    acc.display();
    // Will call the display method depending on the object's type at run-time
}

Account a;
display_account(a);

Savings b;
display_account(b);

Checking c;
display_account(c);

Trust d;
display_account(d);
```
