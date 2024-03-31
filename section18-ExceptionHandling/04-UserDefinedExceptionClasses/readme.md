# User defined exceptions
We can create exception classes and throw instances of those classes

Best practice:
<ul>
    <li>Throw an object not a primitive type</li>
    <li>Throw an object by value</li>
    <li>Catch an object by reference (or const reference)</li>
</ul>

Creating exception classes

```
class DivideByZeroException{};

class NegtiveValueException{};
```

#### Throwing user-defined exception classes

```
double calculate_mpg(int miles, int gallons){
    if(gallons == 0)
        throw DivideByZeroException();
    if(gallons < 0 || miles < 0)
        throw NegativeValueException();
    return static_cast<gallons> / miles;
}
```

#### Catching an user-defined exceptions

```
try{
    miles_per_gallon = calculate_mpg(miles, gallons);
    std::cout<<"Result: "<< miles_per_gallon <<std::endl;
}catch(const DivideByZero &ex){
    std::cerr<<"You can't divide by zero"<<std::endl;
}catch(const NegativeValueException &ex){
    std::cerr<<"Negative values aren't allowed"<<std::endl;
}

std::cout<<"Bye"<<std::endl;
```

