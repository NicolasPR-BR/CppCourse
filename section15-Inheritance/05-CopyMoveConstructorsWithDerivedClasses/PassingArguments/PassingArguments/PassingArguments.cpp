#include <iostream>

class Base {
    int value;
public:
    Base() : value{ 0 } {
        std::cout << "Base no-args constructor" << std::endl;
    }

    Base(int x) : value{ x } {
        std::cout << "int Base constructor" << std::endl;
    }

    // Copy constructor

    Base(const Base& other) : value{other.value}{
        std::cout << "Copy constructor Base class" << std::endl;
    }

    // Assignment operator
    Base &operator=(const Base& rhs){
        if (&rhs != this) {
            value = rhs.value;
        }
        std::cout << "Assignment operator Base class" << std::endl;
        return *this;
    }

};

class Derived : public Base {
    
public:
    double doubled_value;

    Derived() : Base(), doubled_value{0} {
        std::cout << "Derived no-args constructor" << std::endl;
    }

    Derived(int x) : Base(x), doubled_value{ static_cast<double>(x)*2} {
        std::cout << "int Derived constructor" << std::endl;
    }

    //Copy constructor
    Derived(const Derived& other) : Base(other), doubled_value{other.doubled_value} {
        std::cout << "copy constructor Derived class" << std::endl;
    }

    //Assignment operator
    Derived& operator=(const Derived &rhs) {
        if (this != &rhs) {
            Base::operator=(rhs);
            this->doubled_value = rhs.doubled_value;
        }
        std::cout << "Assigment operator Derived class" << std::endl;
        return *this;
    }
};

int main()
{
    Base base2{ 100 };
    Derived dir2{ 100 };
    
    Derived derived{};
    
    std::cout << std::endl << std::endl;

    Derived copy{dir2};
    std::cout << std::endl << std::endl;
    derived = dir2;


    return 0;
}