# Unary operators as member methods (++, --, 0, !)
```
    ReturnType Type::operatorOp()

    Number Number::operator-() const;
    Number Number::operator++(); //Pre-increment
    Number Number::operator++(int); //Post-Incremenet
    bool Number::operator!() const;

    Number n1 {100};
    Number n2 = -n1; // n1.operator-()
    n2 = ++n1; //n1.operator++()
    n2 = n1++; //n1.operator++(int)
```

### Example
In our example, We're going to implement - as make "lowercase"

```
    Mystring larry1{"LARRY"};
    Mystring larry2;

    larry1.display(); //LARRY

    larry2 = -larry1;

    larry1.display(); //LARRY
    larry2.display(); //larry
```
But does this make sense? What does "increment player" mean?

```
Mystring Mystring::operator-() const{
    char *buff = new char[std::strlen(str)+1];
    std::strcpy(buff, str);

    for(size_t i = 0; i<std::strlen(buff); i++){
        buff[i] = std::tolower(buff[i]);
    }

    Mystring temp{buff};
    delete [] buff;
    return temp;
}
```

## With binary operators
```
ReturnType Type::operatorOp(const Type &rhs);

Number Number::operator+(const Number &rhs) const;
Number Number::operator-(const Number &rhs) const;
bool Number::operator==(const Number &rhs) const;
bool Number::operator<(const Number &rhs) const;

Number n1{100}, n2{200}; 
Number n3 = n1 + n2;    // n1.operator+(n2)
n3 = n1 - n2;   // n1.operator-(n2)
if(n1 == n2)    // n1.operator==(n2)
```

### Example Mystring

```
bool Mystring::operator==(const Mystring &rhs) const{
    if(std::stcmp(str, rhs.str))
        return true;
    
    return false;
}
```

### Example - Concatenation
```
Mystring Larry{"Larry"};
Mystring moe{"Moe"};
Mystring stooges{" is one of the three stooges"};

Mystring result = larry + stooges; //larry.operator+(stooges);

result = moe + " is also a stooge"; //moe.operator+(" is also a stooge")

result = "Moe" + stooge; //Error, "Moe".operator+(stooge)
```