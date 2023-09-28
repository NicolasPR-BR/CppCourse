# What is a reference?
<ul>
    <li>An alias for a variable</li>
    <li>Must be initialized to a variable when declared</li>
    <li>Cannot be null</li>
    <li>Once initialized cannot be made to refer to a diffent variable</li>
    <li>Very useful as function parameters</li>
    <li>Might be helpful to think of a reference as a constant pointer that is automatically dereferenced</li>
</ul>

### Using references in range-based for loops
```
    vector<string> stooges {"Larry", "Moe", "Curly"};

    for(auto str: stooges)
        str = "Funny"; //Changes the copy
    for(auto str: stooges)
        cout<<str<<endl; //Larry, Moe, Curly
```

```
vector<string> stooges {"Larry", "Moe", "Curly"};

    for(auto &str: stooges)
        str = "Funny"; //Changes the actual
    for(auto str: stooges)
        cout<<str<<endl; //Funny, Funny, Funny
```

If you're not going to modify the referenced element, make it const
```
vector<string> stooges {"Larry", "Moe", "Curly"};

    for(auto const &str: stooges)
        str = "Funny"; //Compiler error
```

When we pass a reference, we don't make a copy, which in some cases, is more efficient.

## Passing referenced to functions
<ul>
    <li>Please refer to the section 11 videos and examples</li>
</ul>