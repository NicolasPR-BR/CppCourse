# Polymorphismn
## Virtual functions
<ul>
    <li>Redefined functions are bound statically</li>
    <li>Overridden functions are bound dynamically</li>
    <li>Virtual functions are overridden</li>
    <li>Allow us to treat all objects generally as objects of the Base class</li>
</ul>

## Declaring virtual functions
<ul>
    <li>Declare the function you want to override as virtual in the Base class</li>
    <li>Virtual functions are virtual all the way down the hierarchy from this point</li>
    <li>Dynamic polymorphism only via Account class pointer or reference</li>
</ul>

```
class Account{
public:
    virtual void withdraw(double amount);
};
```

<ul>
    <li>Override the function in the Derived classes</li>
    <li>Function signature and return type must match EXACTLY</li>
    <li>Virtual keyword is not required but is best practice</li>
    <li>If you don't provide an overriden version it is inherited from it's base class</li>
</ul>

```
class Checking : public Account{
    public:
        virtual void withdraw(double amount);
}; 
```