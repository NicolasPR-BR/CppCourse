#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name() const{
        return name;
    };

    void set_name(std::string name_val) {
        this->name = name_val;
    }

    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{ name_val }, health{ health_val }, xp{xp_val} {
}

Player::Player() : Player{"", 0 ,0} {

}

Player::Player(std::string name_val) : Player{ name_val, 0, 0 } {

}

int main()
{
    const Player villain{ "Villain", 55, 100 };
    //villain.set_name("villain");


    std::cout << villain.get_name() << std::endl;
}