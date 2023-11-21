#pragma once
#include <string>

class Player
{
private:
	std::string name;
	int health;
	int xp;
	static int num_players;
public:
	std::string get_name() { return name; };
	int get_health() { return health; };
	int get_xp() { return xp; };

	// Static functions only has access to static variables
	static int get_num_players() { return num_players; };

	Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
	//Copy constructor
	Player(const Player& source);
	~Player();
};