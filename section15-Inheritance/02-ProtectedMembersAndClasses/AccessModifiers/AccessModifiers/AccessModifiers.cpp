#include <iostream>

// Friends of the class have access to all members
class Base {
public:
    int a{ 0 };
    void display() { std::cout << a << ", " << b << ", " << c << std::endl; };
protected:
    int b{};
private:
    int c{};
};

class Derived : protected Base {
public:
    void display() { 
        a = 10;
        b = 20;
        Base::display(); };
    

};

int main()
{
    Base base;
    base.a = 1;

    Derived derived;
    // When the inheritance is public, "a" can be accessed from the outside
    // When the inheritance is protected, "a" cannot be accessed from the outside. 
    // The derived class will still have access to the variable "a" and "b", but 
    // it now will be considered as "protected"
    
    // If inheritance is "private", The derived class still has access to "public" and "protected"
    derived.a = 10;
    
    derived.display();

    return 0;
}