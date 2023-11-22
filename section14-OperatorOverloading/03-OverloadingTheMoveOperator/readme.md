# Move assignment operator
By default, C++ will use the copy constructor, so it's not needed to overload this operator.
```
Mystring s1;

s1 = Mystring{"Frank"};
```
We can only do this because Mystring{"Frank"} is a temporary object without a name, so it is a RHS value

If we have a raw pointer, we should overload the move assignment for efficiency

### Declaration
```
    Type &Type::operator=(Type &&rhs);

    Mystring &Mystring::operator=(Mystring &&rhs);

    s1 = Mystring{"Joe"};
    s1 = "Frank"; //Move operator called, since a temp object will be created
```