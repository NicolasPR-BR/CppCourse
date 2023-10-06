# Constructor initialization Lists
<ul>
    <li>So far, all data member values have been set in the construction body</li>
    <li>Constructor initialization lists
        <ul>
            <li>Are more efficient</li>
            <li>Initialization list immediately follows the parameter list</li>
            <li>Initializes the data members as the object is created</li>
            <li>Order of initialization is the order of declaration in the class</li>
        </ul>
    </li>
</ul>

```
class Player{
    private:
        std::string name;
        int health;
        int xp;
    public:
        Player();
        Player(std::string name_val);
        Player(std::string name_val, int health_val, int xp_val);
};
```

### Player
Previous way:

```
Player::Player(){
    name = "None";
    health = 0;
    xp = 0;
}
```

Better way:
<br/>The data values receive these values as they're created. In the previous method, they would be assigned.

```
Player::Player() : name{"None"}, health{0}, xp{0}{

}
```

### Player(std::string, int, int)
Previous way:
```
Player::Player(std::string name_val, int health_val, int xp_val){
    name = name_val;
    health = health_val;
    xp = xp_val;
}
```
Better way:
```
Player::Player(std::string name_val, int health_val, int xp_val): name{name_val}, health{health_val}, xp{xp_val}{

}
```