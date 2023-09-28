# Overview
<ul>
    <li>What is a pointer?</li>
    <li>Declaring pointers</li>
    <li>Storing addresses in pointers</li>
    <li>Dereferencing pointers</li>
    <li>Dynamic memory allocation</li>
    <li>Pointer arithmetic</li>
    <li>Pointers and arrays</li>
    <li>Pass-by-reference with pointers</li>
    <li>Const and Pointers</li>
    <li>Using pointers to functions</li>
    <li>Potential pointer pitfalls</li>
    <li>What is a reference?</li>
    <li>Review passing references to functions</li>
    <li>Const and references</li>
    <li>Reference variables in range-based for loops</li>
    <li>Potential reference pitfalls</li>
    <li>Raw vs Smart Pointers</li>
</ul>

# What is a pointer?
<ul>
    <li>A variable
        <ul>
            <li>Whose value is an address</li>
        </ul>
    </li>
    <li>What can be at that address?
        <ul>
            <li>Another variable</li>
            <li>A Function</li>
        </ul>
    </li>
    <li>Pointers point to variables or functions?</li>
    <li>If x in an integer variable and its value is 10 then I can declare a pointer that points to it</li>
    <li>To use the data that the pointer is pointing to you must know its type</li>
</ul>

# Why use pointers?

Can't I just use the variable or the function itself?
<br/><b>Yes, but no always</b>
<ul>
    <li>Inside functions, pointers can be used to access data that are defined outside the function. Those variables may not be in scope so you can't access them by their name</li>
    <li>Pointers can be used to operate on arrays very efficiently</li>
    <li>We can allocate memory dynamically on the heap of free storage
        <ul>
            <li>This memory doesn't even have a variable name</li>
            <li>The only way to get to it is via a pointer</li>
        </ul>
    </li>
    <li>With OO. Pointers are how polymorphism works!</li>   
    <li>Can access specific addresses in memory
        <ul>
            <li>Useful in embedded and systems applications</li>
        </ul>
    </li>
</ul>

# Declaring pointers
```
variable_type *pointer_name;
```
```
int *int_ptr;
double *double_ptr;
char *char_ptr;
string *string_ptr;
```
### Initializing pointers
Initializing pointers to "nowhere"
<br/>Very important step
<br/>An unitialized pointer could be pointing anywhere in memory.
```
int *int_ptr {};
double *double_ptr {nullptr};
char *char_ptr {nullptr};
string *string_ptr {nullptr};
```

<ul>
    <li>Always initialize pointers</li>
    <li>Unitializing to zero or nullptr(C++ 11) represents zero
        <ul>
            <li>Implies that the pointer is "pointing nowhere"</li>
        </ul>
    </li>
    <li>If you don't initialize a pointer to point to a variable or function then you should initialize it to nullptr to make in "Null"</li>
</ul>