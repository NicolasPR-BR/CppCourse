# Operator Overloading
Unary operators as global functions(++, --, -, !)
```
    ReturnType operatorOp(Type &obj);

    Number operator-(const number &obj);
    Number operator++(Number &obj);
    Number operator++(Number &obj, int); //post-increment
    bool operator!(const Number &obj);

    Number n1{100}; 
    Number n2 = -n1; //Operator-(n1) 
    n2 = ++n1; //operator++(n1)
    n2 = n1++; //operator++(n1, int)
```

These aren't member functions, we need access to the variables like the "this" pointer we'd use if they were member functions. So, we need to define them as friends from our function as to allow them to access private attributes.

Altough we could still use getter methods to get access to our variables, they're often seen as friends.

### Overloading the make lowercase operator
```
Mystring larry1{"LARRY"};
Mystring larry2{};

larry1.display();

larry2 = -larry1;

larry1.display();
larry2.display(); //Larry
```

Our use of the - will look the same, but will be implemented the differently

### Mystring operator-
```
Mystring operator-(const Mystring &obj){
    char *buff = new char[std::strlen(obj.str)+1];
    std::strcpy(buff, obj.str);

    for(size_t i = 0; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    
    Mystring temp{buff};
    delete [] buff;
    return temp
}
```

## Binary operator as global functions (+, -, ==, !=, <, >, etc)
```
    ReturnType operatorOp(const Type &lhs, const Type &rhs);

    Number operator+(const Number &lhs, const Number &rhs);
    Number operator-(const Number &lhs, const Number &rhs);
    bool operator==(const Number &lhs, const Number &rhs);
    bool operator<(const Number &lhs, const Number &rhs);

    Number n1{100}, n2{200};
    Number n3 = n1 + n2; //operator+(n1, n2)
    n3 = n1 - n2; //operator-(n1, n2)
    if(n1 == n2) //operator==(n1, n2)
```

### Mystring operator==
```
    bool operator==(const Mystring &lhs, const Mystring &rhs){
        
        if(std::strcmp(lhs.str, rhs.str) == 0)
            return true;
        else
            return false;

    }
```

### Mystring concatenation+
```
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring stooges{" is one of the stooges"};

    Mystring result = larry + stooges; //operator+(larry, stogoes)

    result = moe + " is also a stooge"; // operator+(moe, " is also a stooge");

    result = "Moe" + stooges; //OK with non-member functions
```
Won't give an error because the compiler will try to make "moe" become a Mystring

```
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    size_t buff_size = std::strlen(lhs.str) + std::strlen(rhs.len) + 1;

    char *buff = new char[buff_size];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    
    delete [] buff;
    return temp;
}
```