# Acessing pointer adress?
& the address operator
<ul>
    <li>Variables are stored in unique addresses</li>
    <li>Unary operator</li>
    <li>Evaluates to the address of its operand
        <ul>
            <li>Operand cannot be a constant or expression that evaluates to temp values</li>
        </ul>
    </li>
</ul>

```
    int num{10};

    cout<<"Value of num is: " <<num<<endl;
    cout<<"sizeof of num is: "<<sizeof(num)<<endl;
    cout<<"Address of num is: "<< &num<<endl;
```
With pointers:
```
    int *p;

    cout<<"Value of p is: "<< p << endl;
    cout<<"Address of p is: "<<&p<<endl; //We're getting the address of the pointer, not where the pointer is pointing to!
    cout<<"Sizeof of p is: " << sizeof(p)<<endl;
    p = nullptr;
    cout<<"Value of p is: "<<p<<endl;

```


### Sizeof a pointer variable
<ul>
    <li>Don't confuse the size of a pointer and the size of what it points to</li>
    <li>All pointers in a program have the same size</li>
    <li>They may be pointing to a very large or very small types</li>
</ul>

```
    int *p1{};
    double *p2{};
    unsigned long long *p3{};
    vector<string> *p4{};
    string *p5{};
```

### Storing an address in pointer variable?
Types pointers
<ul>
    <li>The compiler will make sure that the address stored in a pointer variable is of the correct type</li>
</ul>

```
int score{10};
double high_temp {100.7};

int *score_ptr{};

score_ptr = &score; //Ok
score_ptr = &high_temp; //Compiler error
```

<ul>
    <li>Pointers are variables</li>
    <li>Pointers can be null</li>
    <li>Pointers can be uninitialzed</li>
</ul>
```
    double high_temp{100.7};
    double low_temp{37.2};

    double *temp_ptr;

    temp_ptr = &high_temp;
    temp_ptr = &low_temp;

    temp_ptr = nullptr;
```