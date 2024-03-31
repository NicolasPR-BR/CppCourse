# Custom deleters

Not seen very often

<ul>
    <li>Sometimes when we destroy a smart pointer we need more than just destroy the object on the heap</li>
    <li>These are special use-cases</li>
    <li>C++ smart pointers allow you to provide custom deleters</li>
    <li>Lots of way to achieve this
        <ul>
            <li>Functions</li>
            <li>Lambdas</li>
            <li>Others ..</li>
        </ul>
    </li>
</ul>

Custom deleters - function


```
void my_deleter(Some_class *raw_pointer){
    // your custom deleter code
    delete raw_pointer;
}

shared_ptr<Some_class> ptr{new Some_class{}, my_deleter};
```

Custom deleter - function

```
void my_deleter(Test *ptr){
    std::cout<<"In my custom deleter"<<std::endl;
    delete ptr;
}

shared_ptr<Test> ptr{new Test{}, my_deleter};
```

Using lambda

```
shared_ptr<Test> ptr(new Test{100}, [](Test *ptr){
    std::cout<<"\tUsing my custom deleter"<<std::endl;
    delete ptr;
});
```