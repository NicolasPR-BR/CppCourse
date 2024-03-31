# Using the override specifier
<ul>
    <li>We can override Base class virtual functions</li>
    <li>The function signature and return must be EXACTLY the same</li>
    <li>If they are different then we have redefinition NOT overriding</li>
    <li>Redefinition is statically bounded</li>
    <li>Overriding is dynamically bounded</li>
    <li>C++11 provides an override specifier to have the compiler ensure overriding</li>
</ul>

```
class Base{
    public:
        virtual void say_hello() const{
            std::cout<<"Hello, I'm a Base class object"<<std::endl;
        }

        virutal ~Base(){};
}

class Derived : public Base{
    public:
        virtual void say_hello(){
            std::cout<<"Hello - I'm a Derived class object"<<std::endl;
        } // Purposefully forgeting the const, we're not overriding

        virtual ~Derived(){

        };
}
```

The derived class say_hello will be statically bounded, and may cause unexpected behavior when we use a base class pointer.

Let's say for example we have the following code:
```

Base *p1 = new Base();
p1->say_hello(); // "Hello - I'm a Base class object"

Base *p1  = new Derived();
p2->say_hello(); // "Hello - I'm a Base class object"
```
<ul>
    <li>This wasn't the behavior we expected</li>
    <li>This is because say_hello signatures are different</li>
    <li>Derived **redefines** say_hello, it doesn't override it</li>
</ul>

We can now use the override specifier:

We use the overrider specifier by placing it after the definition, but before "\{". In this case, we'll have an error since the function doesn't have const

```
class Base{
    public:
        virtual void say_hello() const{
            std::cout<<"Hello, I'm a Base class object"<<std::endl;
        }

        virutal ~Base(){};
}

class Derived : public Base{
    public:
        virtual void say_hello() override{
            std::cout<<"Hello - I'm a Derived class object"<<std::endl;
        } // Purposefully forgeting the const, we're not overriding

        virtual ~Derived(){

        };
}
```