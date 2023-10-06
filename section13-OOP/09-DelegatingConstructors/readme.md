# Delegating Constructors
<ul>
    <li>Often the code for constructors is very similar</li>
    <li>Duplicated code can lead to errors</li>
    <li>C++ allows for delegating constructors
        <ul>
            <li>Code for one constructor can call another in the initialization list</li>
            <li>Avoids duplicating code</li>
        </ul>
    </li>
</ul>

### Example
Constructors cannot be called within another constructors
```
class Player{
    private:
        std::string name;
        int health;
        int xp;
    public:
        // Overloaded constructors
        Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}{};
        
        Player(std::string name_val) : Player{name_val, 0, 0}{};

        Player() : Player{"None", 0, 0}{}; 
};
```
One thing to keep in mind. If we call a no args constructor the following will happen:
<ol>
    <li>No args constructor is called</li>
    <li>Initialization list starts by calling the three args constructor</li>
    <li>The args constructor initialization list sets defaut values</li>
    <li>Three args constructor code runs</li>
    <li>Three args constructors returns to the no args constructor</li>
    <li>No args constructor code runs</li>
</ol>
