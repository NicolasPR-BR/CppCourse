# Constructor and Destructor
Constructor and class initialization
<ul>
    <li>A derived class inherits from its base class</li>
    <li>The base part of the Derived class MUST be initialized before the derived class is initialized</li>
    <li>When a derived object is created
        <ul>
            <li>Base class constructor executes then</li>
            <li>Derived class constructor executes</li>
        </ul>
    </li>
</ul>

### Example
```
class Base{
public:
    Base(){
        std::cout<<"Base constructor"<<std::endl;
    }
};

class Derived : public Base{
    Derived(){
        std::cout<<"Derived constructor"<<std::endl;
    }
};
```
When the derived class is initialized we see:
<br/>Base constructor
<br/>Derived constructor

## Destructor
<ul>
    <li>Class destructor are invoked in the reverse order as constructor</li>
    <li>The derived part of the derived class must be destroyed before the base class destrucor is invoked</li>
    <li>When a derived object is destroyed
        <ul>
            <li>Derived class destructor executes then</li>
            <li>Base class destructor executes</li>
            <li>Each destructor shoud free resources allocated in it's own constructors</li>
        </lu>
    </li>
</ul>

### Example
```
class Base{
public:
    Base(){
        std::cout<<"Base constructor"<<std::endl;
    }
    ~Base(){
        std::cout<<"Base destructor"<<std::endl;
    }
};

class Derived : public Base{
public:
    Derived(){
        std::cout<<"Derived constructor"<<std::endl;
    }
    ~Derived(){
        std::cout<<"Derived destructor"<<std::endl;
    }
};
```
The derived class will now output:
<br/>Base constructor
<br/>Derived constructor
<br/>Derived destructor
<br/>Base destructor


## Important topics in inheritance
<ul>
    <li>A derived class does not inherit
        <ul>
            <li>Base class constructor</li>
            <li>Base class destructors</li>
            <li>Base class overloaded assignment operators</li>
            <li>Base class friend functions</li>
        </ul>
    </li>
    <li>However, the derived class constructor, destructors, and overloaded assignment operator can invoke the base-class versions
    </li>
    <li>C++11 allows explicit inheritance of base "non-special" constructors with:
        <ul>
            <li><b>usign Base::Base;</b> anywhere in the derived class declaration</li>
            <li>Lots of rules involved, often better to define constructors yourself</li> 
        </ul>
    </li>
</ul>
