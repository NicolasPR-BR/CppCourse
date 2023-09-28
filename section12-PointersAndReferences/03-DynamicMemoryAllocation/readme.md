# Dynamic Memory Allocation
Allocating storage from the heap at runtime
<ul>
    <li>We often don't know how much storage we need until we need it</li>
    <li>We can allocate storage for a variable at run time</li>
    <li>Recal C++ Arrays
        <ul>
            <li>We had to explicitly provide the size and it was fixed</li>
            <li>But vectors grow and shrink dynamically</li>
        </ul>
    </li>
    <li>We can use pointers to access newly allocated heap storage</li>
</ul>

### Using the <b style="font-style: italic; font-weight: 700">new</b> keyword

```
    int *int_ptr{nullptr};
    int_ptr = new int;

    cout<<int_ptr<<endl;
    cout<<*int_ptr<<endl;

    *int_ptr = 100;
    
    cout<<*int_ptr<<endl;
```
After declaring the variable, the only way to access it is through the pointer, if we loose the place where the memory is pointing to we have a memory leak.
</br>You must deallocate the storage after using it. 

### Using <b style="font-style: italic; font-weight: 700">delete</b> to deallocate storage
```
    int *int_ptr{};
    int_ptr = new int;

    //  Something gets done here

    //And then we deallocate after the variable is not needed anymore
    delete int_ptr;
```

### Using <b style="font-style: italic; font-weight: 700">new[]</b> to allocate storage for an array
```
    int *array_ptr{};
    int size{};

    cout<<"How big do you want the array? ";
    cin>>size;

    array_ptr = new int[size];

```

### Using delete [] to deallocate storage for an array
```
    int *array_ptr{};
    int size{};

    cout<<"How big do you want the array? ";
    cin>>size;

    array_ptr = new int[size];
    
    //Something gets done here

    delete [] array_ptr; //Free allocated space
```