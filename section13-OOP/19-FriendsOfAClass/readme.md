# Friends of a class
<ul>
<il>Friend
    <ul>
        <li>A function or a class that has access to private class member</li>
        <li>And, that function of or class is NOT a member of the class it is accessing</li>
    </ul>
    </li>
</ul>

<ul>
    <li>Function
        <ul>
            <li>Can be regular non-member functions</li>
            <li>Can be member methods of another class</li>
        </ul>
    </li>
</ul>

<ul>
    <li>Class
        <ul>
            <li>Another class can have access to private class members</li>
        </ul>
    </li>
</ul>

<ul>
    <li>Friendship must be granted NOT taken
        <ul>
            <li>Declared explicitly in the class that is granting friendship</li>
            <li>Declared in the function prototype with the keyword friend</li>
        </ul>
    </li>
</ul>

<ul>
    <li>Friendship is not symetric
        <ul>
            <li>Must be explicitly granted
                <ul>
                    <li>if A is a friend of B</li>
                    <li>B is not a friend of A</li>
                </ul>
            </li>
        </ul>
    </li>
</ul>

<ul>
    <li>Friendship is not transitive
        <ul>
            <li>Must be explicitly granted
                <ul>
                    <li>if A is a friend of B AND</li>
                    <li>B is a friend of C</li>
                    <li>Then A is NOT a friend of C</li>
                </ul>
            </li>
        </ul>
    </li>
</ul>

## non-member function
```
class Player{
    friend void display_player(Player &p);
    std::string name;
    int health;
    int xp;

public:

};
```


```
void display_player(Player &p){
    std::cout<<p.name<<std::endl;
    std::cout<<p.health<<std::endl;
    std::cout<<p.xp<<std::endl;
}
```
Display_player may also change private data members

### Member function of another class
```
class Player{
    friend void OtherClass::display::player(Player &p);
    std::string name;
    int health;
    int xp;
public:

};
```

```
class Other_class{
public:
    void display_player(Player &p){
        std::cout<<p.name<<std::endl;
        std::cout<<p.health<<std::endl;
        std::cout<<p.xp<<std::endl;
    }
};
```

## Another class as a friend
```
class Player{
    friend class Other_class;
    std::string name;
    int health;
    int xp;
public:

}
```