# OOP - Object-Oriented Programming - Classes and objects
<ul>
    <li>What is Object-Oriented programming?</li>
    <li>What are classes and objects?</li>
    <li>Declaring classes and creating objects</li>
    <li>Dont and pointer operators</li>
    <li>public and private access modifiers</li>
    <li>Methods, Constructors and Destructors
        <ul>
            <li>Class methods</li>
            <li>Default and overloaded constructors</li>
            <li>Copy and move constructors</li>
            <li>Shallow vs deep copying</li>
            <li>This pointers</li>
        </ul>
    </li>
    <li>Static class members</li>
    <li>Struct vs class</li>
    <li>Friend of a class</li>
</ul>

# What is Object-Oriented programming?
## Procedural programming
<ul>
    <li>Focus is on processes or actions that a program takes</li>
    <li>Programs are typically a collection of functions</li>
    <li>Data is declared separately</li>
    <li>Data is passed as arguments into functions</li>
    <li>Fairly easy to learn</li>
</ul>

### Limitations
<ul>
    <li>Functions need to know the structure of the data
        <ul>
            <li>If the structure of the data changes many functions must be changed</li>
        </ul>
    </li>
    <li>
    As programs get larger they become more:
        <ul>
            <li>Difficult to understand</li>
            <li>Difficult to maintain</li>
            <li>Difficult to Extend</li>
            <li>Difficult to debug</li>
            <li>Difficult to reuse code</li>
            <li>Fragile and easier to break</li>
        </ul>
    </li>
</ul>

## What is Object-Oriented programming
<ul>
    <li>Classes and Objects
        <ul>
            <li>Focus is on classes that model real-world domain entities</li>
            <li>Allows developers to think at a higher level of abstraction</li>
            <li>Used successfully in very large programs</li>
        </ul>
    </li>
    <li>Encapsulation
        <ul>
            <li>Objects contain data AND operations that work on that data</li>
            <li>Abstract Data Type(ADT)</li>
        </ul>
    </li>
    <li>
        Information-hiding
        <ul>
            <li>Implementation-specific logic can be hidden</li>
            <li>users of the class code to the interface since they don't need to know the implementation</li>
            <li>More abstraction</li>
            <li>Easier to test, debug, maintain and extend</li>
        </ul>
    </li>
    <li>Reusability
        <ul>   
            <li>Easier to reuse classes in other applications</li>
            <li>Faster development</li>
            <li>Higher quality</li>
        </ul>
    </li>
    <li>Inheritance
        <ul>
            <li>Can create new classes in the term of existing classes</li>
            <li>Reusability</li>
            <li>Polymorphic classes</li>
        </ul>
    </li>
    <li>Polymorphism and more...</li>
</ul>

## Limitations
<ul>
    <li>Not a panacea
        <ul>
            <li>OO Programming won't make bad code better</li>
            <li>Not suitable for all types of problems</li>
            <li>Not everything decomposes to a class</li>
        </ul>
    </li>
    <li>Learning curve
        <ul>
            <li>Usually a steeper learning curve, especially for C++</li>
            <li>Many OO languages, many variations of OO concepts</li>
        </ul>
    </li>
    <li>Design
        <ul>
            <li>Usually more up-front design is necessary to create good models and hierarchies</li>
        </ul>
    </li>
    <li>Programs can be:
        <ul>
            <li>Larger in size</li>
            <li>Slower</li>
            <li>More complex</li>
        </ul>
    </li>
</ul>

# Classes and Objects
<ul>
    <li>Classes
        <ul>
            <li>Blueprint from which objects are created</li>
            <li>A user defined data-type</li>
            <li>Has attributes(data)</li>
            <li>Has methods(functions)</li>
            <li>Can hide data and methods</li>
            <li>Provides a public interface</li>
        </ul>
    </li>
    <li>
        Example classes
        <ul>
            <li>Account</li>
            <li>Employee</li>
            <li>Image</li>
            <li>std::vector</li>
            <li>std::string</li>
        </ul>
    </li>
    <li>Objects
        <ul>
            <li>Created from a class</li>
            <li>Represents a specific instance of a class</li>
            <li>Can create many, many objects</li>
            <li>Each has its own identity</li>
            <li>Each can use the defined class methods</li>
        </ul>
    </li>
    <li>Example Account objects
        <ul>
            <li>Frank's account is an instance of an Account</li>
            <li>Jim's account is an instance of an Account</li>
            <li>Each has its own balance, can make deposits, withdrawls, etc.</li>
        </ul>
    </li>
</ul>

```
int high_score;
int low_score;

Account frank_account;
Account jim_account;

std::vector<int> scores;
std::string name;
```