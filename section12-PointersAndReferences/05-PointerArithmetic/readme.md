# Pointer Arithmetic
<ul>
    <li>Pointer can be used in
        <ul>
            <li>Assignment expressions</li>
            <li>Arithmetic expressions</li>
            <li>Comparison expressions</li>
        </ul>
    </li>
    <li>C++ Allows pointer arithmetic</li>
    <li>Pointer arithmetic only makes sense with raw arrays</li>
</ul>

## ++ and --
<ul>
<li>++ increments a pointer to point to the next array element

    
    int_ptr++;
    
</li>
<li>
-- decrements a pointer to point to the previous array element

    int_ptr--;

</li>

</ul>

## + and -
<ul>
<li>
    + increment pointer by n * sizeof(type)

    int_ptr += n; or int_ptr = int_ptr + n;
</li>
<li>
    - decrement pointer by n * sizeof(type)
    
    int_ptr -= n; or int_ptr = int_ptr + n;
</li>
</ul>

## Subtracting two pointer
<ul>
    <li>
        Determine the number of elements between the pointers
    </li>
<li>
        Both pointer must point to the same data type
        
        int n = int_ptr2 - int_ptr1;
</li>
</ul>

## Comparison
Determine if two pointers point to the same location
<ul>
    <li>Does NOT compare the data where they point!</li>
</ul>

```
    string s1{"Frank"};
    string s2{"Frank"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout<<(p1 == p2)<<endl; //False
    cout<<(p1 == p3)<<endl; //True

```

### Comparing the data pointer point to
Determine if two pointers point to the same data
<ul>
    <li>You must compare the referenced pointers</li>
</ul>

```
    string s1{"Frank"};
    string s2{"Frank"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout<<(*p1 == *p2)<<endl; //False
    cout<<(*p1 == *p3)<<endl; //True

```

