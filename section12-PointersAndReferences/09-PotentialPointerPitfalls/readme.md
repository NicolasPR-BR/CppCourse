# Potential pointer pitfalls
<ul> 
    <li>Uninitialized pointers</li>
    <li>Dangling pointers</li>
    <li>Not checking if new failed to allocate memory</li>
    <li>Leaking memory</li>
</ul>

## Uninitialized pointers
```
    int *int_ptr; // Pointing to nowhere
    
    *int_ptr = 100; // Hopefully a crash
```

## Dangling Pointer
<ul>
    <li>Pointer that is pointing to released memory
        <ul>
            <li>For example, 2 pointers to the same data</li>
            <li>1 pointer releases the data with delete</li>
            <li>The other pointer accesses the release data</li>
        </ul>
    </li>
    <li>Pointer that points to memory that is invalid
        <ul>
            <li>We saw this when we returned a pointer to a function local variable</li>
        </ul>
    </li>
</ul>

## Not checking if new failed
<ul>
    <li>If new fails an exception if thrown</li>
    <li>We can use exception handling to catch exceptions</li>
    <li>Dereferencing a null pointer will cause your program to crash</li>
</ul>

## Leaking memory
<ul>
    <li>Forgetting to release allocated memory with delete</li>
    <li>If you lose your pointer to the storage allocated on the heap you have no way to get back to that storage again</li>
    <li>The memory is orphaned or leaked</li>
    <li>One of the most common pointer problems</li>
</ul>