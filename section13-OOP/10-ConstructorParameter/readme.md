# Default constructor parameters
<ul>
    <li>Can often simplify our code and reduce the number of overloaded constructors</li>
    <li>Same rules apply as we learned with non-member functions</li>
</ul>

```
class Player{
    private:
        std::string name;
        int health;
        int xp;
    public:
        // Constructor with default parameter values 
        Player(std::string name_val = "None", int health_val = 0, int xp_val =0)
};
```

```
Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}{

}

Player empty; // None, 0, 0
Player frank{"Frank"}; // Frank, 0, 0
Player villain{"Villain", 100, 55}; // Villain, 100, 55
Player hero{"Hero", 100}; // Hero, 100, 0
```
We have to be careful to not declare ambiguous constructors. Since we're declaring a constructor width default values, what happens to a no-argos constructor?