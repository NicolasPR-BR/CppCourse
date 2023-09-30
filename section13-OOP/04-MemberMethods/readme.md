# Implementing member methods
<ul>
    <li>Very similar to how we implemented functions</li>
    <li>Member methods have access to member attributes
        <ul>
            <li>So you don't need to pass them as arguments</li>
        </ul>
    </li>
    <li>Can be implemented inside the class declaration
        <ul>
            <li>Implicit inline</li>
        </ul>
    </li>
    <li>
        Can be implemented outside the class declaration
        <ul>
            <li>Need to use Class_name::method_name</li>
        </ul>
    </li>
    <li>Can separate specification from implementation
        <ul>
            <li>.h file for the class declaration</li>
            <li>.cpp file for the class implementation</li>
        </ul>
    </li>
</ul>

## implementing member methods
### Inside the class declaration

```
class Account{
private:
    double balance;
public:
    void set_balance(double bal){
        balance = bal;
    }
    double get_balance(){
        return balance;
    }
}
```
### Outside the class declaration
```
class Account{
    private:
        double balance;
    public:
        void set_balance(double bal);
        double get_balance();
};

void Account::set_balance(double bal){
    balance = bal;
}
double Account::get_balance(){
    return balance;
}
```

## Separating specification from implementation
### Account.h
```
class Account{
    private:
        double balance;
    public:
        void set_balance(double bal);
        double get_balance();
};
```
</br>If this file is included more than once, the compiler will make a copy, which is wasteful. We can prevent this by implementing include guards
</br> _CAN_BE_ANY_NAME_
</br>Standard tells us that this should be a combination of the name with preceding and ending underscores, should be unique

```
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

    // Account class definition

#endif
```

With include guards the include .h file should look like this

```
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
class Account{
    private:
        double balance;
    public:
        void set_balance(double bal);
        double get_balance();
};
#endif
```

We could also use <b>#pragma once</b>, but this preprocessor command does not behave the same on all compilers, some don't even implement it. Avoid it.

### Account.cpp
Include with angle brackets ("\<" and "\>") is used to include system header files.
<br/>Includes with double quotes only includes files that are local to the project.

```
#include "Account.h"

void Account::set_balance(double bal){
    balance = bal;
}
double Account::get_balance(){
    return balance;
}

```

### main.cpp
Always <b>include .h</b> files and <b>not .cpp</b> files
```
#include <iostream>
#include "Account.h"

int main(){
    Account frank_account;
    frank_account.set_balance(1000.0);
    double bal = frank_account.get_balance();

    std::cout<<bal<<std::endl; // 1000
    return 0;
}
```