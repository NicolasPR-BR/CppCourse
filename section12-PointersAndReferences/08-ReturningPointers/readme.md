# Returning a pointer from a function
<ul>
    <li>Functions can also return pointers</li>
</ul>

```
    type *function();
```

<ul>
    <li>Should return pointers to
    <ul>
        <li>Memory dynamically allocated in the function</li>
        <li>To data that was passed in</li>
    </ul></li>
    <li>Never return a pointer to a local function variable! (It goes out of scope)</li>
</ul>

```
 int *largest_int(int *int_ptr1, int *int_ptr2){
    if(*int_ptr1 > *int_ptr2)
        return int_ptr1;
    else
        return int_ptr2;
 }
```

```
int main(){
    int a{100};
    int b{200};

    int *largest_ptr{nullptr};
    largest_ptr = largest_int(&a, &b);
    cout<<*largest_ptr<<endl;
    return 0;
}
```

### Returning dynamically allocated memory

```
int *create_array(size_t size, int init_value = 0){
    int *new_storage{nullptr};

    new_storage = new int[size];
    for(size_t i{0}; i < size; i++)
        *(new_storage+i) = init_value;
    return new storage;
}
```

int main(){
    int *my_array;

    my_array = create_array(100,20);

    //delete

    delete [] my_array;
    return 0;
}

### Never return a pointer to a local variable
```
    int *dont_do_this(){
        int size{};

        return &size;
    }
    int *or_this(){
        int size{};
        int *int_ptr{&size};

        return int_ptr
    }
```