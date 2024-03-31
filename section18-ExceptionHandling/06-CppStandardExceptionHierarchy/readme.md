# C++ Exception Hierarchy

C++ provides a class hierarchy of exception classes
<ul>
    <li>std::exception is the base class</li>
    <li>All subclasses implement the what() virtual function</li>
    <li>We can create our own user-defined exception subclass</li>
</ul>

```
virtual const char *what() const noexcept;
```

Deriving our class from std::exception

```
class IllegalBalanceException: public std::exception{
    public:
        IllegalBalanceException() noexcept = default;
        ~DefaultBalanceException() = default;
        virtual const char* what() const noexcept{
            return "Illegal balance exception";
        }
};
```

ou modified class constructor

```
Account::Account(std::string name, double balance) : name{name}, balance{balance}{
    if(balance < 0)
        throw IllegalBalanceException{};
}
```