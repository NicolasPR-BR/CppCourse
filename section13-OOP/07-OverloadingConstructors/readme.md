# Overloading Constructors
<ul>   
    <li>Classes can have as many constructors as necessary</li>
    <li>Each must have a unique signature</li>
    <li>Default constructor is no longer compiler-generated once another constructor is declared</li>
</ul>

### Overloaded constructors

```
class Player{
    private:
        std::string name;
        int health;
        int xp;
    public:
        Player();
        Player(std::string name_val);
        Player(std::string name_val, int_health_val, int xp_val);
};
```
Overloaded constructors
```
Player::Player(){
    name = "None";
    health = 0;
    xp = 0;
}

Player::Player(std::string name_val){
    name = name_val;
    health = 0;
    xp = 0;
}
```

```
Player::Player(std::string name_val, int health_val, int xp_val){
    name = name_val;
    health = health_val;
    xp = xp_val;
}
```