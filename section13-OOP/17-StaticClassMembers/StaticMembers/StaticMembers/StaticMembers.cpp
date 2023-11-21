#include <iostream>
#include "Player.h"

void display_active_players() {
    std::cout << "Active players: " << Player::get_num_players() << std::endl;
}

int main()
{
    display_active_players();

    {
        Player obj1;
        display_active_players();
    }

    display_active_players();

    Player* obj1{ new Player{} };
    Player obj2{ *obj1 };
    display_active_players();
    
    delete obj1;
    display_active_players();

    return 0;
}