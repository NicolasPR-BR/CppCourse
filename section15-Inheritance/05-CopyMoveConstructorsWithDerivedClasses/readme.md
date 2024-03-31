# Inheritance
Copy-move constructors and operator=
<ul>
    <li>Not inherited from the base class</li>
    <li>You may not need to provide your own:
        <ul>
            <li>Compiler-provided versions may be just fine</li>
        </ul>
    </li>
    <li>We can explicitly invoke the base class versions from the Derived class</li>
</ul>

## Copy constructor
<ul>
    <li>Can invoke Base copy constructor explicitly
        <ul>
            <li>Derived object "other" will be sliced</li>
        </ul>
    </li>
</ul>

```
Derived::Derived(const Derived &other) 
    : Base(other), {Derived initialization list}{
        //Code
}
```

Here, the compiler will "slice" out the part of the derived object and send the base class to the correct constructor.

Example:
Base class:

```
class Base{
    int value;
public:

    Base(const Base &other) : value{other.value}{
        cout<<"Base copy constructor"<<endl;
    }
};
```

Derived class:
```
class Derived : public Base{
    int doubled_value;

public:
    Derived(const Derived &other) 
    : Base(other), doubled_value{other.doubled_value}{
        cout<<"Derived copy constructor"<<endl;
    }
}
```

## operator=

Base class:

```
class Base{
    int value;
public:
    Base &operator=(const Base &rhs){
        if(this != &rhs){
            value = rhs.value;
        }
        return *this;
    }
};
```

Derived class:
```
class Derived : public base{
    int doubled_value;
public:
    Derived &operator=(const Derived &rhs){
        if (this != &rhs){
            Base::operator=(rhs); // Assign base part
            doubled_value = rhs.doubled_value; // Assign the derived part
        }
        return *this;
    }
};
```

<ul>
    <li>You often don't need to create you own</li>
    <li>If you don't declare them in the Derived. The compiler will simply create them and automatically call the base class version</li>
    <li>If you provide them, then you must call the base class version</li>
    <li>Careful with raw pointers. If you have them, use deep copy semantics</li>
</ul>