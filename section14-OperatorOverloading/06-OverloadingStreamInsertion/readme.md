# Stream insertion << and extraction >>
```
Mystring larry{"Larry"};

cout<<larry<<end; // Larry

Player hero{"Hero", 100, 33};
cout<<hero<<endl; //{name: Hero, health: 100, xp: 33}
```

```
Mystring larry;
cin>>larry;

Player hero;
cin>>hero
```

### Stream insertion
```
Mystring larry;

cin>>larry;

Player hero;

cin>>hero;
```

<ul>
    <li>Doesn't make sense to implement these overloads as members methods
    <ul>
        <li>Left operand must be a user-defined class</li>
        <li>Not the way we normally use these operators</li>
    </ul>
    </li>
</ul>

```
Mystring larry;
larry<<cout; // What does this mean?

Player hero;
hero>>cin;  // ??????
```

## Stream insertion operator (<<)
We receive a reference to the output stream object, and the object that is being inserted into the stream, which is our object
```
std::ostream &operator<<(std::ostream &os, const Mystring &obj){
    os<<obj.str; // if friend function
    // os <<obj.get_str(); // if it's not a friend fuction
    return os;
}
```
<ul>
    <li>Return a reference to the ostream so we can keep inserting</li>
    <li>Don't return ostream by value</li>
</ul>

std::istream &operator>>(std::istream &is, Mystring &obj){
    char *buff = new char[1000];
    is >> buff;
    obj = Mystring{buff};
    delete [] buff;
    return is;
}

<ul>
    <li>Return a reference to the istream so we can keep inserting</li>
    <li>Update the object passed in</li>
</ul>