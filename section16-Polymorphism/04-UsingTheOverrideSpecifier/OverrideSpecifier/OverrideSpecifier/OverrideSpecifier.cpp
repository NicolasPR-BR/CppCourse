#include <iostream>

class Base {
public:
    virtual void say_hello() const {
        std::cout << "Hello from the base class" << std::endl;
    }
};

class Derived : public Base {
public:
    virtual void say_hello() const override{
        std::cout << "Hello from the derived class" << std::endl;
    }
    /*
    * 
    * This one causes an error because it's not overriding anything from the base class
    * to fix add "const" before override
    virtual void say_hello() override{
        std::cout << "Hello from the derived class" << std::endl;
    }
    */
};

int main()
{
    Base* p1 = new Base{};
    Base* p2 = new Derived{};

    p1->say_hello();
    p2->say_hello();
    return 0;
}