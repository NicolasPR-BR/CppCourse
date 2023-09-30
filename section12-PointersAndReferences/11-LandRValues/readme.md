# L-Values and R-Values
## L-Values
<ul>L-Values
    <ul>
        <li>Values that have names and are addressable (can be used on the left hand side of an statement)</li>
        <li>modifiable if they are not constants</li>
    </ul>
</ul>

```
    int x{100}; // x in an l-value
    x = 1000;
    x = 1000 + 20;
    string name; // name is an l-value
    name = "Frank";
```

### What's not an l-value?
```
    100 = x; // 100 is not an l-value
    (1000+20) = x; // (1000+20) is not an l-value

    string name;
    name = "Frank";
    "Frank" = name; //"Frank" is NOT na l-value
```

# R-Values
<ul>
    <li>r-value(non-addressable and non-assignable)
        <ul>
            <li>A value that's not an l-values
                <ul>
                    <li>on the right-hand side of an assignment expression</li>
                    <li>a literal</li>
                    <li>a temporary which is intended to be non-modifiable</li>
                </ul>
            </li>
        </ul>
    </li>
</ul>

```
int x{100}; // 100 is an r-value
int y = x + 200; // (x+200) is an r-value

string name;
name = "Frank"; //"Frank" is an r-value

int max_num = max(20, 30); // max(20,30) in an r-value
```

### R-Values can be assigned to l-values explicitly
```
    int x{100};
    int  y{0};

    y = 100; // r-value 100 assigned to l-value y
    x = x + y; // r-value (x+y) assigned to l-value x
```

## L-Values references
<ul>
    <li>The references we've used are l-values references
        <ul>
            <li>Because we are referencing l-values</li>
        </ul>
    </li>
</ul>

```
int x{100};

int &ref1 = x; //ref1 is a reference to l-value
ref1 = 1000;

int &ref2 = 100; //Error 100 is an r-value
```

### L-Values references
<ul>
    <li>The same when we pass-by-reference</li>
</ul>

```
int square(int &n){
    return n*n;
}

int num{10};

square(num); //Ok

square(5); //Error - can't reference r-value 5
```