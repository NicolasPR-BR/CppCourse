# Shared Pointers

<ul>
    <li>Provides shared ownership of heap objects</li>
    <li>shared_pointer<T>
        <ul>
            <li>Points to an object of type T on the heap</li>
            <li>It is not unique - there can many shared_ptr's pointing to the same object on the heap</li>
            <li>Establishes shared ownership relationship</li>
            <li>CAN be assigned and copied</li>
            <li>CAN be moved</li>
            <li>Doesn't support managing arrays by default</li>
            <li>When the use count is zero, the managed object on the heap is destroyed</li>
        </ul>
    </li>
</ul>

## Creating, initiliazing and using
```
{
    std::shared_ptr<int> p1{new int{100}};

    std::cout<<*p1<<std::endl; // 100

    *p1 = 200;

    std::cout <<*p1<<std::endl; // 200
} // Automagically deleted
```

### Other useful methods
```
{
   // use_count - the number of shared_ptr objects managing the heap object
   std::shared_ptr<int> p1{new int{100}} ;
   std::cout<<p1.use_count()<<std::endl; // 1

   std::shared_ptr<int> p2 {p1}; // shared ownership
   std::cout<<p1.use_count()<<std::endl; // 2

   p1.reset(); // decrement the use_count; p1 is nulled out
   std::cout<<p1.use_count()<<std::endl; // 0
   std::cout<<p2.use_count()<<std::endl; // 1
}
```

### User defined classes

```
{
    std::shared_ptr<Account> p1{new Account{"Larry"}};
    std::cout<<*p1<<std::endl; // display account

    p1->deposit(1000);
    p1->withdraw(500);
}
```

### Vectors and move

```
{
    std::vector<std::shared_ptr<int>> vec;

    std::shared_ptr<int> ptr{new int{100}};
    
    vec.push_back(ptr); // OK - copy is allowed

    std::cout<<ptr.use_count()<<std::endl; // 2
}
```

### In C++11

```
{

    std::shared_ptr<int> p1 = std::make_shared<int>(100); // use count: 1
    std::shared_ptr<int> p2{p1}; // use count: 2
    std::shared_ptr<int> p3;
    p3 = p1; //  use count: 3
}
```
In C++ 11:
<ul>
    <li>std::make_shared is more efficient</li>
    <li>All 3 pointers point to the same object on the heap!</li>
    <li>When the use_count becomes 0 the heap object is deallocated</li>
</ul>