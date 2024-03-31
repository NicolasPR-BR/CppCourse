    ## Unique Pointer
<ul>
    <li>
    Simple smart pointer - very efficient!
    </li>
    <li>
    unique_ptr<T>
        <ul>
            <li>Points to an object of type T on the heap
            </li>
            <li>
                It is unique - there can only be one unique_ptr<T> pointing to the object on the heap
            </li>
            <li>
                Owns what it points to
            </li>
            <li>
            Cannot be assigned or copied
            </li>
            <li>
                Can be moved
            </li>
            <li>
                When the pointer is destroyed, what it points to is automatically destroyed
            </li>
        </ul>
    </li>
</ul>

unique_ptr - creating, initilizing and using

```
{
    std::unique_ptr<int> p1{new int{100}};
    std::cout<<*p1<<std::endl; // 100

    *p1 = 200;

    std::cout<< *p1<<std::endl // 200

} // Automatically deleted
```
{
Some useful methods:

```
std::unique_ptr<int> p1{new int{100}};

std::cout<<p1.get()<<std::endl; 

// Releases the memory it's holding
p1.reset(); // p1 is now nullptr

if(p1)
    std::cout<<*p1<<std::endl; // wont execute

} // Automatically deleted
```

user_defined classes
```
{
std::unique<Account> p1{new Account{"Larry"}};
std::cout<<*p1<<std::endl; // display account

p1->deposit(1000);
p1->withdraw(500);
}
```

vectors and move
```
{
std::vector<std::unique_ptr<int>> vec;

std::unique_ptr<int> ptr{new int{100}};

vec.push_back(ptr); // Error - copy not allowed

vec.push_back(std::move(ptr));

} // Automatically deleted
```

make_unique(C++14)

```
{
    std::unique_ptr<int> p1 = make_unique<int>(100);
    std::unique_ptr<Account> p2 = make_unique<Account>("Curly", 5000);

    auto p3 = make_unique<Player>("Hero", 100, 100);

}//Automatically deleted
```

More efficient - no calls to new or delete