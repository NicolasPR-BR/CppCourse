#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name() { return name; };
    int get_health() { return health; };
    int get_xp() { return xp; };
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    //Copy constructor
    Player(const Player& source);
    //Destructor
    ~Player() {
        std::cout << "Destructor being called for "<< name << std::endl;
    };
};

Player::Player(std::string name_val, int health_val, int xp_val) 
    :name{ name_val }, health{ health_val }, xp{ xp_val } {
    std::cout << "Three-args constructor for " + name << std::endl;
}

Player::Player(const Player& source)
    : Player{source.name, source.health, source.xp} {
    std::cout << "Copy construtor called for " << source.name << std::endl;
};

// Makes a copy of p
void display_player(Player p) {
    std::cout<<std::endl << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
    std::cout << std::string( 50, '*' ) << std::endl << std::endl;
}  

int main()
{
    std::cout << std::string( 50, '*' ) << std::endl;
    Player empty{};
    Player frank{ "Frank" };
    Player hero{ "Hero", 100 };
    Player villain{ "Villain", 100, 55 };
    std::cout << std::string( 50, '*' ) << std::endl << std::endl;

    Player emptyCpy{empty};
    display_player(empty);
    std::cout << std::string( 50, '*' ) << std::endl << std::endl;

    return 0;
}