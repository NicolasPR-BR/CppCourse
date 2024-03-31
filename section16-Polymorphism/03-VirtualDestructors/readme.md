# Polymorphism - Virtual destructors
<ul>
    <li>Problems can happen when we destroy polymorphic objects</li>
    <li>If a derived class is destroyed by deleting its storage via the base class pointer and the class has a non-virtual destructor. The behavior will be undefined by C++ standard.</li>
    <li>Derived objects must be destroyed in the correct order starting at the correct destructor</li>
    <li> ***If we have virtual functions, we must have virtual destructors!*** </li>
</ul>

So the solution to this problem is:
<ul>
    <li>If a class has virtual functions</li>
    <li>ALWAYS provide a public virtual destructor</li>
    <li>If a base class destructor is virtual then all derived class destructors are also virtual</li>
</ul>

```
class Account{
public:
    virtual void withdraw(double amount);
    virtual ~Account();
};
```