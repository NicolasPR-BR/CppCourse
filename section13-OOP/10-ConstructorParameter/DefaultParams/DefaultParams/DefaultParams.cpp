#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    //Default values
    Player(std::string name_val = "Name val", int health_val = 0, int xp_val = 0);
    Player() {}
};

Player::Player(std::string name_val, int health_val, int xp_val) : name{ name_val }, health{ health_val }, xp{ xp_val }{
    std::cout << "Three-args constructor" << std::endl;
}
//Compiler error
/*
Player::Player() {

}
*/

int main()
{
    Player newPlayer{};
    Player* ptrPlayer = new Player{"ptrPlayer"};
    Player threeArgsPlayer{"Three args", 100, 40};

    delete ptrPlayer;
    return 0;
}