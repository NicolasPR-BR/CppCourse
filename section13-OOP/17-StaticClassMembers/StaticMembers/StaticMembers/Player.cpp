#include "Player.h"

//We must initialize the static variable
int Player::num_players{ 0 };

Player::Player(std::string name_val, int health_val, int xp_val)
{
	++num_players;
}

Player::Player(const Player& source) : Player(source.name, source.health, source.xp)
{
}

Player::~Player()
{
	--num_players;
}
