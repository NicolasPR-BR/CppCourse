# Using const with classes
<ul>
    <li>Pass arguments to class member methods as const</li>
    <li>We can also create const objects</li>
    <li>What happens if we call member functions on const objects?</li>
    <li>const-correctness</li>
</ul>

# Creating a const object
<ul>
    <li>villain is a const object so it's attributes cannot change</li>
</ul>

```
    const Player villain{"Villain", 100, 55};
```
### What happens when we call member methods on a const object?
const Player villain{"Villain", 100, 55};

```
villain.set_name("Nice guy"); //Error

std::cout<<villain.get_name() <<std::endl; //Error
```

Compiler assumes cout could potentially change some value, so it throws an error

### What happens when we call member methods on a const object?

```
const Player villain{"Villain", 100, 55};

void display_player_name(const Player &p){
std::endl;
}

display_player_name(villain); // Error
```
The function could potentially change the object

### The solution
const methods
```
class Player{
    private:

    public:
    std::string get_name const;
}
```

### Const-correctness

```
const Player villain{"villain", 100, 55};

villain.set_name("Nice guy"); //Error
std::cout<<villain.get_name()<<std::endl; //Ok
```