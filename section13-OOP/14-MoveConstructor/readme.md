# Move constructor
<ul>
    <li>Sometimes when we execute code the compiler creates unnamed temporary values</li>
</ul>

```
    int total{0};
    total = 100+200;
```
<ul>
    <li>100+200 is evaluated as 300 stored in an unnamed temp value</li>
    <li>The 300 is then stored in the variable total</li>
    <li>The the temp value is discarded</li>
</ul>
<ul>
    <li>The same Happens with objects as well</li>
</ul>

## When is it useful?
<ul>
    <li>Sometimes copy constructors are called many times automatically due to copy semantics of c++</li>
    <li>Copy constructors doing deep copying can have a significant performance bottleneck</li>
    <li>C++11 introduced move semantics and the move cosntructor</li>
    <li>Move constructor moves an object rather than copy it</li>
    <li>Optional but recommended when you have a raw pointer</li>
    <li>Copy elision - C++ may optimize copying away completely (RVO -Return value optimization)</li>
</ul>

### r-value references
<ul>
    <li>Used in moving semantics and perfect forwading</li>
    <li>Move semantics is all bout r-value references</li>
    <li>Used by move constructor and move assignment operator to efficiently move an object rather than copy it</li>
    <li>R-value reference operator(&&)</li>
</ul>

```
int  x{100};

int &l_ref = x; // l-value reference
l_ref = 10; // change x to 10

int &&r_ref = 200; //r-value ref
r_ref = 300; //Change r_ref to 300

int &&x_ref = x; //Compiler error
```

### L-value reference parameters
```
int x{100}; // X is an l-value

void func(int &num); // A

func(x); // Calls a - x is an l-value
func(200); // Error - 200 is an r-value
```
Error: cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'

### r-value reference parameters
```
int x{100}; // X is an l-value

void func(int &&num); // B

func(200); // Calls B - 200 is an r-value
func(x); // Error - x is an l-value
```
Error:cannot bind rvalue reference of type 'int&&' to lvalue of type 'int'

### overloaded
```
int x{100}; // X is an l-value

void func(int &&num); // A
void func(int &&num); // B

func(200); // Calls B - 200 is an r-value
func(x); // Calls A - 200 is an l-value
```

## Example - move class

```
class Move{
private:
    int *data; // Raw Pointer
public:
    void set_data_value(int d){*data = d;}
    int get_data_value() {return *data;}
    Move(int d); //Constructor
    Move(const Move &source); //Copy constructor
    ~Move(); //Destructor
};
```
### Move class copy constructor
```
Move::Move(cosnt Move &source){
    data = new int;
    *data = *source.data;
}
```
Allocate storage and copy

### Inefficient copying
```
Vector<Move> vec;
vec.push_back(Move{10});
vec.push_back(Move{20});
```
Copy Constructor will be called to copy the temps
<br/> Too many deep copies will be made, which will be inefficient

### What does it do?
<ul>
    <li>Insted of making a deep copy of the move constructor
        <ul>
            <li>'moves' the resource</li>
            <li>Simply copies the address of the resource from source to the current object</li>
            <li>And, nulls out the pointer in the source pointer</li>
        </ul>
    </li>
    <li>Very efficient</li>
</ul>


### Syntax - r-value reference
```
Type::Type(Type &&source);
Player::Player(Playyer &&source);
Move::Move(Move &&source);
```

### Move class with move constructor
```
class Move{
private:
    int *data; //Raw pointer
public:
    void set_data_value(int d){*data = d;}
    int get_data_value(){return *data;}
    Move(int d); // Constructor
    Move(const Move &source); // Copy constructor
    Move(Move &&source); // Move constructor
    ~Move(); // Destructor
};
```

### Move class move constructor

```
Move::Move(Move &&source) : data{source.data}{
    source.data = nullptr;
}
```
We steal the data and then null out the source pointer

### Efficient
```
Vector<Move> vec;

vec.push_back(Move{10});
vec.push_back(Move{20});
```
Move constructor will be called for the temp r-values