#include <iostream>

#include "Player.h"

int main()
{
	{
		Player* enemy = new Player();
	}
	{
		Player player{ "Name" };
		Player player2{ "Name", 1000, 1000 };
	}

	Player noName{};

	noName.set_name("No Name");

	std::string a;
	std::cin >> a;

	return 0;
}