# Constructors and destructors
Passing arguments to the base class constructors
<ul>
    <li>The base part of a Derived class must be initialzed first</li>
    <li>How can we control exactly which Base constructor is used durign initialization</li>
    <li>We can invoke the whichever Base class constructor we wish in the initialization list of the derived class</li>
</ul>

### Example
```
class Base{
public:
    Base();
    Base(int);
};

Derived::Derived(int x) : Base(x), {optional initializer for derived}{

}
```
### Implementation
Base class 
```
class Base{
    int value;
public:
    Base() : value{0}{
        std::cout<<"Base no-args constructor"<<std::endl;
    }
    
    Base(int x) : value{x}{
        std::cout<<"int base constructor"<<std::endl;
    }
};
```
```
class Derived : public Base{
    int doubled_value;
public:
    Derived() : Base(), doubled_value{0} {
        std::cout<<"Derived no-args constructor"<<std::endl;
    }

    Derived(int x) : Base(x), doubled_value{x*2} {
        std::cout<<"int derived constructor"<<std::endl;
    }
};
```
Output from the program (no-args):
<br/>Derived derived{}
<br/>Base no-args constructor
<br/>Derived no-args constructor

<br/>Output from the program (int)
<br/>Derived derived{100}
<br/>int Base constructor
<br/>int Derived constructor