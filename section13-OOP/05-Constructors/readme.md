# Constructors
<ul>
    <li>Special member method</li>
    <li>Invoked during object creation</li>
    <li>Useful for initialization</li>
    <li>Same name as the class</li>
    <li>No return type is specified</li>
    <li>Can be overloaded</li>
</ul>

### Player constructor

```
class Player{
    private:
        std::string name;
        int health;
        int xp;
    public:
        //Overloaded constructors
        Player();
        Player(std::string name);
        Player(std::stirng name, int health, int xp);
}
```

### Account constructor

```
class Account{
    private:
        std::string name;
        double balance;
    public:
    // Constructors
        Account();
        Account(std::string name, double balance);
        Account(std::string name);
        Account(double balance);
};
```
# Destructors
<ul>
    <li>Special members methods</li>
    <li>Same name as the class proceeded with a tilde(~)</li>
    <li>Invoked automatically when an object is destroyed</li>
    <li>No return type and no parameters</li>
    <li>Only 1 destructor is allowed per class - cannot be overloaded!</li>
    <li>Useful to release memory and other resources</li>
</ul>

### Player destructor

```
class player{
    private:
        std::string name;
        int health;
        int xp;
    public:
        Player();
        Player(std::string name);
        Player(std::string name, int health, int xp);
        // Destructor
        ~Player();
};
```

### Account destructor

```
class Account{
    private:
        std::string name;
        double balance;
    public:
        Account();
        Account(std::string name, double balance)
}
```

# Creating objects

```
    Player slayer;
    Player frank{"Frank", 100, 4};
    Player hero{"Hero"};
    Player villain{"Villain"};
    //Use the objects
    //4 destructors called
```
```
    Player *enemy = new Player("Enemy", 1000, 0);
    //Constructor called

    delete enemy; //Destructor called
```