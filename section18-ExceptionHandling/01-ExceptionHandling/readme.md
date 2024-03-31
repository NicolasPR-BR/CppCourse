# Exception Handling
#### Basic concepts

<ul>
    <li>Exception Handling
        <ul>
            <li>Dealing with extraordinary situations</li>
            <li>Indicates that an extraordinary situation has been detected or has ocurred</li>
            <li>Program can deal with the extraordinary situations in a suitable manner</li>
        </ul>
    </li>
    <li>What causes exceptions?
        <ul>
            <li>Insufficient resources</li>
            <li>Missing resources</li>
            <li>Invalid operations</li>
            <li>Range violations</li>
            <li>Underflows and overflows</li>
            <li>Illegal data and many others</li>
        </ul>
    </li>
    <li>Exception safe
        <ul>
            <li>When your code handles exceptions</li>
        </ul>
    </li>
</ul>

Exception handling should only be done with synchronous code, not asynchronous.

#### Terminology 
<ul>
    <li>Exception
        <ul>
            <li>An object or primitive type that signals that an error has occurred</li>
        </ul>
    </li>
    <li>Throwing an exception (raising an exception)
        <ul>
            <li>Your code detects that an error has occured or will occur</li>
            <li>The place where the error occurred may not know how to handle the error</li>
            <li>Code can throw an exception describing the error to another part of the program that knows how to handle the error</li>
        </ul>
    </li>
    <li>Catching an exception (handle the exception)
        <ul>
            <li>Code that handles the exception</li>
            <li>May or may not cause the program to terminate</li>
        </ul>
    </li>
</ul>

### C++ syntax
<ul>
    <li>throw
        <ul>
            <li>Throws an exception</li>
            <li>Followed by an argument</li>
        </ul>
    </li>
    <li>try { code that may throw an exception}
        <ul>
            <li>The code that may throw an exception must be placed in a try block</li>
            <li>If the code throws an exception the try block is exited</li>
            <li>The thrown exception is handled by the catch handler</li>
            <li>If no catch handler exists the program terminates</li>
        </ul>
    </li>
    <li>catch (Exception ex) { code to handle exception}
        <ul>
            <li>Code that handles the exception</li>
            <li>Can have multiple catch handlers</li>
            <li>May or may not cause the program to terminate</li>
        </ul>
    </li>
</ul>

Divide by zero example

<ul>
    <li>What happens if total is zero?
        <ul>
            <li>crash, overflow</li>
            <li>it depends</li>
        </ul>
    </li>
</ul>

```
double average{};

average = sum / total;
```

We can check if total equals to zero, and then not do the division, but what do we do in case it equals zero? That'll depend on the application

```
double average{};

try{
    if (total == 0)
        throw 0;
    average = sum / total;
}catch(int &ex){
    std::cerr<<"Can't divide by zero"<<std::endl
}
std::cout<<"program continues"<<std::endl;
```