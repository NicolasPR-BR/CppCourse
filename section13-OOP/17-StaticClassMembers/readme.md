# Static class Members
<ul>
    <li>Class data members can be declared as static
        <ul>
            <li>A single data member that belongs to the class, not the objects</li>
            <li>Useful to store class-wide information</li>
        </ul>
    </li>
    <li>Class function can be declared as static
        <ul>
            <li>Independent of any objects</li>
            <li>Can be called using the class name</li>
        </ul>
    </li>
</ul>

## Player class - static members
```
class Player{
private:
    static int num_players;
public:
    static int get_num_players();
};
```
### Player class - initialize the static data
Typically in Player.cpp
```
#include "Player.h"

int Player::num_players = 0;
```

### Player class - implement static method
```
int Player::get_num_players(){
    return num_players;
}
```

### Player class - update the constructor
```
Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}{
    ++num_players;
}
```
### Player class - Destructor
```
Player::~Player(){
    --num_players;
}
```

## Main.cpp
```
void display_active_players(){
    std::cout<<"Active players: "<<Player::get_num_players()<<std::endl;
}


int main(){
    display_active_players();

    Player obj1{"Frank"};
    display_active_players();
}
```