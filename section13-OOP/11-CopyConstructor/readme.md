# Copy constructor
<ul>
    <li>When objects are copied C++ must create a new object from an existing object</li>
    <li>When is a copy of an object made?
        <ul>
            <li>Passing object by value as a parameter</li>
            <li>Returning an object from a function by value</li>
            <li>Constructing one object based on another of the same class</li>
        </ul>
    </li>
    <li>C++ must have a way of accomplishing this so it provides a compiler-defined copy constructor if you don't</li>
</ul>

## Player object by-value

```
Player hero{"Hero", 100, 200};

void display_player(Player p){
    // p is a copy of hero in this example
    // use p
    // Destructor of p will be called
}

display_player(hero);
```

```
Player enemy;

Player create_super_enemy(){
    Player an_enemy{"Super Enemy", 1000, 1000};
    return an_enemy; //Returns a copy of an_enemy
}

enemy = create_super_enemy();
```
## Construct one object based on another
```
Player hero{"Hero", 100, 100};

Player another_hero{hero}; //A copy of hero is made
```

<ul>
    <li>If you don't provide your own way of copying objects by value then the compiler provides a default way of copying objects</li>
    <li>Copies the values of each data member to the new object
        <ul>
            <li>Default memberwise copy</li>
        </ul>
    </li>
    <li>Perfectly fine in many classes</li>
    <li>Beware if you have a pointer data member
        <ul>
            <li>Pointer will be copied</li>
            <li>Not what it is pointing to</li>
            <li>Shallow vs Deep copy</li>
        </ul>
    </li>
</ul>

## Best practices
<ul>
    <li>Provide a copy constructor when you class has raw pointers members</li>
    <li>Provide the copy constructor with a const reference parameter</li>
    <li>Use STL classes as they already provide copy consturctors</li>
    <li>Avoid using raw pointer data members if possible</li>
</ul>

## Declaring the copy constructor

```
Type::Type(const Type &source);

Player::Player(const Player &source);
Account::Account(const Account &source);
```

### Implementing the copy constructor

```
Type::Type(const Type &source){
    // Code or initialization list to copy the object
}
```
or
```
Player::Player(const player &source) 
    :name{source.name},
    health{source.health},
    xp{source.xp}{
        
    }
```
