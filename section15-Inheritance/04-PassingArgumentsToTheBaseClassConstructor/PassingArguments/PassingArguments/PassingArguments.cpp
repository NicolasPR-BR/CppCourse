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
};

class Derived : public Base {
    double doubled_value;
public:
    Derived() : Base(), doubled_value{0} {
        std::cout << "Derived no-args constructor" << std::endl;
    }

    Derived(int x) : Base(x), doubled_value{ static_cast<double>(x)*2} {
        std::cout << "int Derived constructor" << std::endl;
    }
};

int main()
{
    Base base1{};
    Base base2{ 100 };

    Derived dir1{};
    Derived dir2{ 100 };

    return 0;
}