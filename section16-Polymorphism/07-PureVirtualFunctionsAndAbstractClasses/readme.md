# Pure virtual functinons and abstract classes


<ul>
    <li>Abstract class
        <ul>
            <li>Cannot instantiate objects</li>
            <li>These classes are used as base classes in inheritance hierarchies</li>
            <li>Often referred to as Abstract Base Classes</li>
        </ul>    
    </li>
    <li>Concrete class
        <ul>
            <li>Used to instantiate objects from</li>
            <li>All their member functions are defined
                <ul>
                    <li>Checking, Account, Savings account</li>
                    <li>Faculty, Staff</li>
                    <li>Enemy, Level boss</li>
                </ul>
            </li>
        </ul>
    </li>
</ul>

<ul>
    <li>Abstract base class
        <ul>
            <li>Too generic to create objects from
                <ul>
                    <li>Shape, Employee, Account, Player</li>
                </ul>
            </li>
        </ul>
    </li>
    <li>Serves as parent to Derived classes that may have objects</li>
    <li>Contains at least one pure virtual function</li>
</ul>

Pure virtual fucntion:
<ul>
    <li>Pure virtual function
        <ul>
            <li>Used to make a class abstract</li>
        </ul>
    </li>
    <li>Specified with "=0" in it's declaration</li>
    <li>Typically does not provide implementations</li>
</ul>

```
virtual void function() = 0; // Pure virtual function
```

<ul>
    <li>Pure virtual function
        <ul>
            <li>
            Derived classes MUST override the abse class
            </li>
            <li>
            If the derived class doesn't override, this class will too be abstract
            </li>
            <li>
            Used when it doesn't make sense for a base class to have an implementation
                <ul>
                    <li>
                    But concrete classes must implement it
                    </li>
                </ul>
            </li>
        </ul>
    </li>
</ul>

```
virtual void draw()  = 0; // Shape
virtual void defend() = 0; // Player 
```

Example using shape class:
```
class Circle : public Shape{
    private:

    public:
        virtual void draw() override{
            
        }
        virtual void rotate() override{

        }
        virtual ~Circle();
}
```