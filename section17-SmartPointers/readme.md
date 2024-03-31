# Smart Pointers
## Section overview

What's the need for smart pointers?

<ul>
    <li>Issues with raw pointers</li>
    <li>What are smart pointers</li>
    <li>Concept of ownwership and RAII</li>
    <li>C++ Smart Pointers
        <ul>
            <li>Unique pointers (unique_ptr)</li>
            <li>Shared pointers (shared_ptr)</li>
            <li>Weak pointers (weak_ptr)</li>
        </ul>
    </li>
    <li>Custom deletes</li>
</ul>

### Some issues with raw pointers

<ul>
    <li>C++ provides absolute flexibility with memory management
        <ul>
            <li>Allocation</li>
            <li>Deallocation</li>
            <li>Lifetime management</li>
        </ul>
    </li>
    <li>Some potentially serious problems
        <ul>
            <li>Uninitialized (wild) pointers</li>            
            <li>Memory leaks</li>
            <li>Dangling pointers</li>
            <li>Not exception safe</li>
        </ul>
    </li>
    <li>Ownership
        <ul>
            <li>Who owns the pointer?</li>
            <li>When should a pointer be deleted</li>
        </ul>
    </li>
</ul>

### What are smart pointers?
<ul>
    <li>Objects</li>
    <li>Can only point to heap-allocated memory</li>
    <li>Automatically call delete when no longer needed</li>
    <li>Adhere to RAII principles</li>
    <li>C++ Smart Pointers
        <ul>
            <li>Unique pointers (unique_ptr)</li>
            <li>Shared pointers (shared_ptr)</li>
            <li>Weak pointers (weak_ptr)</li>
            <li>Auto pointers (auto_ptr) (deprecated)</li>
        </ul>
    </li>
</ul>

#### How to create a smart pointer
```
#include <memory>
```

<ul>
    <li>Defined by class template
        <ul>
            <li>Wrapper around a raw pointer</li>
            <li>Overloaded operators
                <ul>
                    <li>Dereference (*)</li>
                    <li>Member selectin (->)</li>
                    <li>Pointer arithmetic not supported (++, --, etc)</li>
                </ul>
            </li>
            <li>Can have custom deleters</li>
        </ul>
    </li>
</ul>

A simple example:

```
{
    std::smart_pointer<Some_Class> ptr = ...


    ptr->method();
    std::cout<<(*ptr)<<std::endl;
}

// ptr will be destroyed automatically when
// no longer needed
```

#### RAII - Resource Acquisition is Initialization

<ul>
    <li>Common idiom or pattern used in software design based on container object lifetime</li>
    <li>RAII objects are allocated on the stack</li>
    <li>Resource acquisition
        <ul>
            <li>Open a file</li>
            <li>Allocate memory</li>
            <li>Acquire a lock</li>
        </ul>
    </li>
    <li>Is initialization
        <ul>
            <li>The resource is acquired in a constructor</li>
        </ul>
    </li>
    <li>Resource relinquishing
        <ul>
            <li>Happens in the destructor
                <ul>
                    <li>Close the file</li>
                    <li>Deallocate the memory</li>
                    <li>Release the lock</li>
                </ul>
            </li>
        </ul>
    </li>
</ul>