# Abstract classes as Interfaces
What is using a class as an interface?
<ul>
    <li>An abstract class that has only pure virtual functions</li>
    <li>These functions provide a general set of services to the user of the class</li>
    <li>Provided as public</li>
    <li>Each subclass is free to implement these services as needed</li>
    <li>Every service (method) must be implemented</li>
    <li>The service type information is strictly enforced</li>
</ul>

Example:
<ul>
    <li>C++ does not provide true interfaces</li>
    <li>We use abstract classes and pure virtual functions to achieve it</li>
    <li>Suppose we want to be able to privide **Printable** support for any object we wish without knowning it's implementation at compile time</li>
</ul>

```
std::cout<<any_object<<std::endl;
```
***any_object*** must conform to the Printable interface


```
class Printable{
    friend ostream &operator<<(ostream &, const Printable &obj);
public:
    virtual void print(ostream &os) const = 0;
    virtual ~Printable(){};
};

ostream &operator<<(ostream &os, const Printable &obj){
    obj.print(os);
    return os;
}
```

As Printable example:

```
class Any_Class : public Printable{
public:
    virtual void print(ostream &os) override{
        os<<"Hi from Any_Class";
    }
};
```

```
Any_Class *ptr = new Any_class();
std::cout<<*ptr<<std::endl;

void function1(Any_Class &obj){
    std::cout<<obj<<std::endl;
}

void function2(Printable &obj){
    std::cout<<obj<<std::endl;
}

function1(*ptr); //"Hi from Any_class"
function2(*ptr); //"Hi from Any_class"
```

A Shapes example:

```
class Shape{
public:
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape() {};
};
```

```
class Circle : public Shape{
public:
    virtual void draw() override{ // code here};
    virtual void ratate() override{ // code here};
    virtual ~Circle(){};
};
```

If a class is intended to be used purely as an interface, it may be useful to write it with I_ first, so that it's clear that the class is intended to be used as an interface.

```
vector<I_Shape *> shapes;

I_Shape *p1 = new Circle();
I_Shape *p2 = new Line();
I_Shape *p3 = new Square();

for(auto const &shape : shapes){
    shape->rotate();
    shape->draw();
}

//Delete the pointers
```