# What is operator overloading
<ul>
    <li>Operator overloading allows us to use traditional operators such as +, =, - with user-defined types</li>
    <il>This allows us to define how each operators should treat the data we give it</il>
    <li>May make code more easily readable and writable</li>
    <li>Must be explicitly defined, except for the assignment operator</li>
</ul>

Let pretend we have a Number class which can model any number
### Using functions

```
    Number result = multiply(add(a,b), divide(c,d));
```
### Using member methods

```
    Number result = (a.add(b)).multiply(c.divide(d));
```
### Using overloaded operators:
```
    Number result = (a+b) * (c/d);
```

## What operators can be overloaded
<ul>
    <li>Almost all of C++ operators</li>
    <li>The following cannot be overloaded</li>
</ul>
<table>
    <tr>
        <th>
            operator
        </th>
    </tr>
    <tr>
        <td> 
            ::
        </td>
    </tr>
    <tr>
        <td> 
            :?
        </td>
    </tr>
    <tr>
        <td> 
            .*
        </td>
    </tr>
    <tr>
        <td> 
            .
        </td>
    </tr>
    <tr>
        <td> 
            sizeof
        </td>
    </tr>
</table>

### It's not because an operator can be overloaded, that you should

## Some rules
<ul>
    <li>Precedence and associativity cannot be changed</li>
    <li>'arity' cannot be changed. Ex: division cannot be unary</li>
    <li>Can't overload operators of primitives such as: int, double, float...</li>
    <li>Can't create new operators</li>
    <li>[], (), -> and = must be declared as member methods</li>
    <li>Other operators can be declared as member methods or global functions</li>
</ul>

## Mystring class declaration
```
class Mystring{
private:
    char *str; // C string
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();
    void display const;
    int get_length() const;
    const char *get_str() const;
};
```