#include <iostream>

class A;
class B;

class A {
    std::shared_ptr<B> b_ptr;
public:
    void set_B(std::shared_ptr<B>& a) {
        b_ptr = a;
    }

    A() {
        std::cout << "a constructor" << std::endl;
    }

    ~A() {
        std::cout << "A destructor" << std::endl;
    }
};

class B {
    // std::shared_ptr<A> a_ptr; // Make weak to prevent strong circular reference
    std::weak_ptr<A> a_ptr;
public:
    void set_A(std::shared_ptr<A>& b) {
        a_ptr = b;
    }

    B() {
        std::cout << "B constructor" << std::endl;
    }

    ~B() {
        std::cout << "B destructor" << std::endl;
    }
};

int main()
{
    
    //This causes a memory leak
    //You'll notice the destructors never got called
    std::shared_ptr<B> b{ std::make_shared<B>() };

    std::shared_ptr<A> a{ std::make_shared<A>() };

    a->set_B(b);
    b->set_A(a);
    

    return 0;
}