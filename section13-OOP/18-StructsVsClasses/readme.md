# Structs vs classes
<ul>
    <li>In addition to define a class we can declare a struct</li>
    <li>struct comes from the C programming language</li>
    <li>Essentially the same as a class except
        <ul>
            <li>Members are public by default</li>
        </lu>
    </li>
</ul>

### Class
```
class Person{
    std::string name;
    std::string get_name();
};

Person p;
p.name = "Frank"; // Compiler error - private
std::cout<<p.get_name(); // Compiler error - private
```
### Struct
```
struct Person{
    std::string name;
    std::string get_name(); // Why if name is public?
};

Person p;
p.name = "Frank"; // Ok - public
std::cout<<p.get_name(); // OK - public
```

## Some general guidelines
<ul>
    <li>Use struct for passive objects with public access</li>
    <li>Don't declare methods in struct</li>
</ul>

<ul>Class
    <li>Use class for active objects with private access</li>
    <li>Implement getters/setters as needed</li>
    <li>Implement member methods as needed</li>
</ul>