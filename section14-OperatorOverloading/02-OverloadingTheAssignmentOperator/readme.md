# Assignment operator
The operators is used when an object is assigned to another

```
Mystring s1;
Mystring s2 = s1; // Not assignment

s2 = s1; //Assignment
```
Default is shallow copy
<br/>If we use pointers, we must remember to deep copy

### How do we overload the assignment operators?
```
    Type &type::operator=(const Type &rhs)

    Mystring &mystring::operator=(const Mystring &rhs);
```
When we write this
```
s2 = s1
```
This is called
```
s2.operator=(s1);
```

## How we'll do it:
```
    Mystring &Mystring::operator=(const Mystring &rhs){
        if(this==&rhs)
            return *this;
        delete [] str;
        str = new char[std::strlen(rhs.str)+1];
        std::strcpy(str, rhs.str);

        return *this;
    }
```
<br/>First thing we do is to check self assignment. If rhs is the same as <b>this</b>. We don't and shouldn't do anything to the class, so we simply return it

Since we're S2 already had information previously stored in it (pointer to str), we must first delete that(str), otherwise we'd have dangling pointers.

Then, we assign str a new char array with the same length + EOL. Following this, we use strcpy to copy str from S1 to str of S2

Finally, we return the left hand side object to support chain assignment