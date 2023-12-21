# Protected members and classes

```
class Base{
    protected:
        // Protected base class members
};
```

<ul>
    <li>Accessible from the base class itself</li>
    <li>Accessible from classes Derived from base</li>
    <li>Not accessible by objects of Base or Derived</li>
</ul>

```
class Base{
public:
    int a;
protected:
    int b;
private:
    int c;
};
```

### Access with public inheritance:
With public inheritance, public and protected will be the same in the derived class:

But the derived class won't have access to:
<ul>
    <li>Private</li>
</ul>

### Access with protected inheritance:
With protected inheritance, what used to be public in the base class, is now protected in the derived class.
<br/>What was private in the base class still is inaccessible by the derived class.

### Access with private inheritance:
In private inheritance, what was public or protected in the base class is now private in the derived class. Still, no access to private members